#include "stdio.h"
#include "stdlib.h"
#include "time.h"


void my_bubble_sort(int nums[], size_t len) {
  int n = len - 1;

  while (n > 0) {
    for (int i = 0; i < n; i++) {
      if (nums[i] > nums[i + 1]) {
        int temp = nums[i];
        nums[i] = nums[i + 1];
        nums[i + 1] = temp;
      }
    }
    n--;
  }
}

int main() {
  int nums[9];
  size_t size = sizeof(nums) / sizeof(nums[0]);

  srand((unsigned int)time(NULL));

  for (int i = 0; i <= size - 1; i++) {
    nums[i] = rand();
  }

  my_bubble_sort(nums, size);

  for (int i = 0; i <= size - 1; i++) {
    printf("%d\n", nums[i]);
  }

  return EXIT_SUCCESS;
}
