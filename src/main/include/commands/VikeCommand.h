#pragma once

namespace robovikes
{

class Command
{
public:
    Command();

    void Initialize();
    void Execute();
    bool isFinished();
    void End();
    void Interrupted();

    bool wasInitialized();

private:
    bool mWasInitialized;
};

} // robovikes
