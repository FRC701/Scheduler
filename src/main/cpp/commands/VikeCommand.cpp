#include "Commands/VikeCommand.h"

namespace robovikes {

Command::Command()
: mWasInitialized{false}
{

}

void Command::Initialize()
{
    mWasInitialized = true;
}
void Command::Execute()
{

}
bool Command::isFinished()
{
    return false;
}
void Command::End()
{

}
void Command::Interrupted()
{

}

bool Command::wasInitialized()
{
    return mWasInitialized;
}

} // end namespace robovikes
