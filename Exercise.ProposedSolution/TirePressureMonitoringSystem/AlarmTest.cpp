#include "gtest/gtest.h"

namespace {

// The fixture for testing class Alarm.
class AlarmTest : public ::testing::Test {
protected:
  // You can remove any or all of the following functions if its body
  // is empty.

  AlarmTest() {
    // You can do set-up work for each test here.
  }

  virtual ~AlarmTest() {
    // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  virtual void SetUp() {
    // Code here will be called immediately after the constructor (right
    // before each test).
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test (right
    // before the destructor).
  }

  // Objects declared here can be used by all tests in the test case for Alarm.
};

TEST_F(AlarmTest, dummy_test) {
  EXPECT_TRUE(true);
}

}  // namespace


GTEST_API_ int main(int argc, char **argv) {
  printf("Running main() from gtest_main.cc\n");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
