#include <gtest/gtest.h>

#include "template.h"

TEST(TestTemplate, Equals42) {
  ASSERT_EQ(tmp::Template(), 42);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
