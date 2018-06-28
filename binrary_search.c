#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"

int64_t binary_search(int64_t v, int64_t left, int64_t right, int64_t nums[]) {
  if (right < left) {
    return -1;
  }

  int64_t mid = left + ((right - left) / 2);

  if (nums[mid] > v) {
    // left
    return binary_search(v, left, mid - 1, nums);
  } else if (nums[mid] < v) {
    // right
    return binary_search(v, mid + 1, right, nums);
  } else {
    return mid;
  }
}

int main() {
  int64_t nums[] = { 1, 2, 3, 4, 5, 6, 7 };
  size_t len = sizeof(nums) / sizeof(nums[0]);

  int64_t result = binary_search(7, 0, len - 1, nums);
  printf("%lld\n", result);

  result = binary_search(1, 0, len - 1, nums);
  printf("%lld\n", result);

  result = binary_search(10, 0, len - 1, nums);
  printf("%lld\n", result);

  return EXIT_SUCCESS;
}