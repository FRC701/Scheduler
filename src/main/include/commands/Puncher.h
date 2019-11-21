#pragma once

#include "commands/VikeCommand.h"

namespace robovikes {

class Puncher : public Command
{
public:
    Puncher();
    void Initialize();
    void Execute();
    bool isFinished();
    void End();
    void Interrupted();

    int counter() const;
private:
    int mInitializeCounter;
};

} // end namespace