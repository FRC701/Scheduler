#pragma once

#include <vector>

#include "Commands/VikeCommand.h"

namespace robovikes {

class Scheduler
{
public:
    void Schedule();
    
    void addCommand(Command*);
private:
    std::vector<Command*> mCommands;
};

} // end namespace robovikes
