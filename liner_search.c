#include "stdio.h"
#include "stdlib.h"

#define NOT_FOUND -1

int liner_search(int v, size_t len, int nums[]) {
  int i = 0;

  while (nums[i] != v && i < len) {
    i++;
  }

  if (i >= len) {
    return NOT_FOUND;
  }

  return i;
}


int main() {
  int nums[] = { 1, 2, 3 };
  size_t len = sizeof(nums) / sizeof(nums[0]);

  int result = liner_search(3, len, nums);
  printf("%d\n", result);

  result = liner_search(1, len, nums);
  printf("%d\n", result);

  result = liner_search(4, len, nums);
  printf("%d\n", result);

  return EXIT_SUCCESS;
}
