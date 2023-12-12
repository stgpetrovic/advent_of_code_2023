#include "day01/solution.h"

#include <glog/logging.h>

#include <algorithm>
#include <cstdint>
#include <limits>
#include <queue>
#include <string>
#include <vector>

#include "absl/strings/numbers.h"
#include "absl/container/flat_hash_map.h"
#include "absl/strings/match.h"

int32_t Extract(const char* s, int32_t step) {
  static const auto* const n = new absl::flat_hash_map<std::string, int32_t>({
      {"one", 1},
      {"two", 2},
      {"three", 3},
      {"four", 4},
      {"five", 5},
      {"six", 6},
      {"seven", 7},
      {"eight", 8},
      {"nine", 9},
      });

  for (const auto& [k, v] : *n) {
    if (step == 1) {
      if (absl::StartsWith(s, k)) {
        return v;
      }
    } else {
      if (absl::StartsWith(s - k.size(), k)) {
        return v;
      }
    }
  }
  return -1;
}

int32_t Solve(const std::vector<std::string>& in) {
  int32_t sum = 0;
  for (const auto& line : in) {
    int32_t num = 0;
    for (const char c : line) {
      if (std::isdigit(c)) {
        num = 10 * (c - '0');
        break;
      }
    }
    for (int i = line.size() - 1; i >= 0; --i) {
      if (std::isdigit(line[i])) {
        num += (line[i] - '0');
        break;
      }
    }
    sum += num;
  }
  return sum;
}

int32_t Solve2(const std::vector<std::string>& in) {
  int32_t sum = 0;
  for (const auto& line : in) {
    int32_t num = 0;
    for (int i = 0; i < line.size(); ++i) {
      if (std::isdigit(line[i])) {
        num = 10 * (line[i] - '0');
        break;
      } else if (int value = Extract(&line[i], 1); value != -1) {
        num = 10 * value;
        break;
      }
    }
    for (int i = line.size() ; i >= 0; --i) {
      if (std::isdigit(line[i])) {
        num += (line[i] - '0');
        break;
      } else if (int value = Extract(&line[i], -1); value != -1) {
        num += value;
        break;
      }
    }
    sum += num;
  }
  return sum;
}
