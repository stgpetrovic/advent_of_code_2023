#include <vector>

#include <string>

#include "absl/strings/str_split.h"
#include "day01/solution.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

TEST(Day01, First) {
  std::string input =R"(1abc2
pqr3stu8vwx
a1b2c3d4e5f
treb7uchet)";
  auto result = Solve(absl::StrSplit(input, "\n"));
  ASSERT_EQ(result, 142);
}

TEST(Day01, Second) {
  std::string input =R"(two1nine
eightwothree
abcone2threexyz
xtwone3four
4nineeightseven2
zoneight234
7pqrstsixteen)";
  auto result = Solve2(absl::StrSplit(input, "\n"));
  ASSERT_EQ(result, 281);
}

