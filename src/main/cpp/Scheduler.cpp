#include "Scheduler.h"

#include <algorithm>

namespace robovikes {

void Scheduler::Schedule()
{
    std::for_each(mCommands.begin(), mCommands.end(),
        [](Command* command){ command->Initialize(); });
}

void Scheduler::addCommand(Command* command)
{
    mCommands.push_back(command);
}


} // end namespace robovikes
