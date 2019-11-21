#include "commands/Puncher.h"

namespace robovikes {

Puncher::Puncher()
: mInitializeCounter{0}
{
}

void Puncher::Initialize()
{
    mInitializeCounter++;
}

int Puncher::counter() const
{
    return mInitializeCounter;
}

}   // end namespace robovikes




