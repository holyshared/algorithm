//8 4 3 7 6 5 2 1

#include "stdio.h"
#include "stdlib.h"

void merge_sort(int len, int nums[]) {
  if (len <= 1) {
    return;
  }

  int middle = len / 2;

  merge_sort(middle, nums);
  merge_sort(len - middle, nums + middle);

  int cloned[middle];

  for (int i = 0; i < middle; i++) {
    cloned[i] = nums[i];
  }

  int left = 0;
  int right = middle;
  int new_pos = 0;

  while (left < middle && right < len) {
    if (cloned[left] >= nums[right]) {
      nums[new_pos] = nums[right];
      right++;
    } else {
      nums[new_pos] = cloned[left];
      left++;
    }
    new_pos++;
  }

  while (left < middle) {
    nums[new_pos] = cloned[left];
    left++;
    new_pos++;
  }
}

/**
 * nums=6,5 left=6, right=5
 * nums=5,5 left > right then
 * nums=5,6 remain left
 *
 * nums=5,6 left=5, right=6
 * nums=5,6 left < right then
 * nums=5,6 remain left
 *
 * nums=7,9,3,6 left=7,9, right=3,6
 * nums=3,9,3,6
 * nums=3,6,7,6
 * nums=3,6,7,9
 */
int main() {
  int nums[] = { 8, 4, 3, 7, 6, 5, 2, 1 };
  size_t len = sizeof(nums) / sizeof(nums[0]);

  merge_sort((int)len, nums);

  for (int i = 0; i <= len - 1; i++) {
    printf("%d", nums[i]);
  }

  return EXIT_SUCCESS;
}
