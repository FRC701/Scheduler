#include <gtest/gtest.h>

#include "Scheduler.h"
#include "commands/VikeCommand.h"

TEST(SchedulerTest, ConstructScheduler)
{
    Scheduler scheduler;
}

TEST(SchedulerTest, Schedule)
{
    // Arrange
    Scheduler scheduler;
    // Action
    scheduler.Schedule();
    // Assertion ???
    // TODO (Mr. Murphy): How do we test Schedule?
}

using Command = robovikes::Command;
TEST(SchedulerTest, ScheduleCommand)
{
    // Arrange
    // Command?
    Scheduler scheduler;
    Command aCommand;
    scheduler.addCommand(aCommand);
    // Action
    scheduler.Schedule();
    // Assertion ???
    // TODO (Mr. Murphy): How do we test Schedule?
}
