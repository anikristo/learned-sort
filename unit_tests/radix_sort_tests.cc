/**
 * @file radix_sort_tests.cc
 * @author Ani Kristo (anikristo@gmail.com)
 * @brief Unit test files for Radix Sort
 *
 * @copyright Copyright (c) 2020 Ani Kristo (anikristo@gmail.com)
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3 of the License.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <algorithm>
#include <random>
#include <vector>

#include "../src/utils.h"
#include "gtest/gtest.h"
#include "radix_sort.h"

using namespace std;

extern size_t TEST_SIZE;

TEST(RADIX_SORT_TEST, UniformFloat) {
  // Generate random input
  auto arr = uniform_distr<float>(TEST_SIZE, -1, 1);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  radix_sort(arr.begin(), arr.end());

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));
}

TEST(RADIX_SORT_TEST, UniformDouble) {
  // Generate random input
  auto arr = uniform_distr<double>(TEST_SIZE, -1, 1);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  radix_sort(arr.begin(), arr.end());

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));
}

TEST(RADIX_SORT_TEST, UniformUnsigned) {
  // Generate random input
  auto arr = uniform_distr<unsigned>(TEST_SIZE, 0, 10000);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  radix_sort(arr.begin(), arr.end());

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));
}

TEST(RADIX_SORT_TEST, UniformUnsignedLong) {
  // Generate random input
  auto arr = uniform_distr<unsigned long>(TEST_SIZE, 0, 100000000);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  radix_sort(arr.begin(), arr.end());

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));
}

TEST(RADIX_SORT_TEST, UniformInt) {
  // Generate random input
  auto arr = uniform_distr<int>(TEST_SIZE, -5000, 5000);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  radix_sort(arr.begin(), arr.end());

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));
}

TEST(RADIX_SORT_TEST, UniformLong) {
  // Generate random input
  auto arr = uniform_distr<long>(TEST_SIZE, -500000, 5000000);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  radix_sort(arr.begin(), arr.end());

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));
}