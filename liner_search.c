#include "stdio.h"
#include "stdlib.h"
#include "time.h"

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


int fast_liner_search(int v, size_t len, int nums[]) {
  int i = 0;

  int last = nums[len - 1];
  nums[len - 1] = v;

  while (nums[i] != v) {
    i++;
  }

  nums[len - 1] = last;


  if (i >= len - 1 && last != v) {
    return NOT_FOUND;
  }

  return i;
}


int main() {
  int nums[1000000];
  size_t len = sizeof(nums) / sizeof(nums[0]);

  srand((unsigned int)time(NULL));

  for (int i = 0; i <= len - 1; i++) {
    nums[i] = rand();
  }

  int result = liner_search(nums[len - 1], len, nums);
  printf("%d\n", result);

  result = liner_search(-1, len, nums);
  printf("%d\n", result);

  result = fast_liner_search(nums[len - 1], len, nums);
  printf("%d\n", result);

  result = fast_liner_search(-1, len, nums);
  printf("%d\n", result);

  return EXIT_SUCCESS;
}
