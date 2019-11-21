#include <gtest/gtest.h>

#include "Scheduler.h"
#include "Commands/VikeCommand.h"

namespace robovikes
{

TEST(SchedulerTest, ConstructScheduler)
{
    Scheduler scheduler;
}

TEST(SchedulerTest, Schedule)
{
    // Arrange
    Scheduler scheduler;
    // Action    scheduler.Schedule();

    // Assertion ???
    // TODO (Mr. Murphy): How do we test Schedule?
}

using Command = robovikes::Command;
TEST(SchedulerTest, ScheduleCommand)
{
    // Arrange
    Scheduler scheduler;
    Command aCommand;
    scheduler.addCommand(&aCommand);
    // Action
    scheduler.Schedule();
    // Assertion
    EXPECT_TRUE(aCommand.wasInitialized());
}

TEST(SchedulerTest, Schedule2Commands)
{
    // Arrange
    Scheduler scheduler;
    Command command1;
    Command command2;
    scheduler.addCommand(&command1);
    scheduler.addCommand(&command2);
    // Action
    scheduler.Schedule();
    // Assertion
    EXPECT_TRUE(command1.wasInitialized());
    EXPECT_TRUE(command2.wasInitialized());
}

    // Action
    scheduler.Schedule();
    // Assertion ???
    // TODO (Mr. Murphy): How do we test Schedule?
}

} // end namespace robovikes
