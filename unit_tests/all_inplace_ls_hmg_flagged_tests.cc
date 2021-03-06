/**
 * @author Ani Kristo (anikristo@gmail.com)
 *
 * @copyright Copyright (c) 2021 Ani Kristo (anikristo@gmail.com)
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

#include "../include/learned_sort.h"
#include "../src/utils.h"
#include "gtest/gtest.h"

using namespace std;

extern size_t TEST_SIZE;

TEST(LEARNED_SORT_TEST, NormalDouble) {
  // Generate random input
  auto arr = normal_distr<double>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, NormalUnsigned) {
  // Generate random input
  auto arr = normal_distr<unsigned>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, NormalLong) {
  // Generate random input
  auto arr = normal_distr<long>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, LognormalDouble) {
  // Generate random input
  auto arr = lognormal_distr<double>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, LognormalUnsigned) {
  // Generate random input
  auto arr = lognormal_distr<unsigned>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, LognormalLong) {
  // Generate random input
  auto arr = lognormal_distr<long>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, UniformReal) {
  // Generate random input
  auto arr = uniform_distr<double>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, UniformUnsigned) {
  // Generate random input
  auto arr = uniform_distr<unsigned>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, UniformLong) {
  // Generate random input
  auto arr = uniform_distr<long>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, RootDupsDouble) {
  // Generate random input
  auto arr = root_dups_distr<double>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, RootDupsUnsigned) {
  // Generate random input
  auto arr = root_dups_distr<unsigned>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, RootDupsLong) {
  // Generate random input
  auto arr = root_dups_distr<long>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, SortedDouble) {
  // Generate random input
  auto arr = sorted_uniform_distr<double>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, SortedUnsigned) {
  // Generate random input
  auto arr = sorted_uniform_distr<unsigned>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, SortedLong) {
  // Generate random input
  auto arr = sorted_uniform_distr<long>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, ReverseSorted) {
  // Generate random input
  auto arr = reverse_sorted_uniform_distr<double>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

/**
 * Test Case suggested by @Morwenn: https://github.com/Morwenn
 */
TEST(LEARNED_SORT_TEST, UniformMod16) {
  // Generate random array
  std::vector<int> arr;
  std::mt19937_64 prng(1604922353);
  for (size_t i = 0; i < TEST_SIZE; ++i) {
    arr.emplace_back(i % 16);
  }
  std::shuffle(arr.begin(), arr.end(), prng);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, ZipfDouble) {
  // Generate random input
  auto arr = zipf_distr<double>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, ZipfUnsigned) {
  // Generate random input
  auto arr = zipf_distr<unsigned>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, ZipfLong) {
  // Generate random input
  auto arr = zipf_distr<long>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, MixGaussDouble) {
  // Generate random input
  auto arr = mix_of_gauss_distr<double>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, MixGaussUnsigned) {
  // Generate random input
  auto arr = mix_of_gauss_distr<unsigned>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, MixGaussLong) {
  // Generate random input
  auto arr = mix_of_gauss_distr<long>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, TwoDupsDouble) {
  // Generate random input
  auto arr = two_dups_distr<double>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, TwoDupsdUnsigned) {
  // Generate random input
  auto arr = two_dups_distr<unsigned>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, IdenticalLong) {
  // Generate random input
  auto arr = identical_distr<long>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, IdenticalDouble) {
  // Generate random input
  auto arr = identical_distr<double>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, IdenticalUnsigned) {
  // Generate random input
  auto arr = identical_distr<unsigned>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}

TEST(LEARNED_SORT_TEST, ChiSquaredLong) {
  // Generate random input
  auto arr = chi_squared_distr<long>(TEST_SIZE);

  // Calculate the checksum
  auto cksm = get_checksum(arr);

  // Sort
  learned_sort::sort(arr.begin(), arr.end());

  // Test that the checksum is the same
  ASSERT_EQ(cksm, get_checksum(arr));

  // Test that it is sorted
  ASSERT_TRUE(std::is_sorted(arr.begin(), arr.end()));
}
