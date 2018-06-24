//8 4 3 7 6 5 2 1

#include "stdio.h"
#include "stdlib.h"

void merge_sort(int len, int nums[]) {
  if (len <= 1) {
    return;
  }

  int middle = len / 2;

  printf("len = %d\n", len);
  printf("middle = %d\n", middle);

  merge_sort(middle, nums);
  merge_sort(len - middle, nums + middle);

//  int cloned[middle];
  int cloned[8];

  for (int i = 0; i < middle; i++) {
    cloned[i] = nums[i];
  }

  int left = 0;
  int right = middle;
  int new_pos = 0;

  while (left < middle && right < len) {
    if (cloned[left] >= nums[right]) {
      printf("right = %d\n", right);
      printf("right_v = %d\n", nums[right]);
      nums[new_pos] = nums[right];
      right++;
    } else {
      nums[new_pos] = cloned[left];
      left++;
    }
    new_pos++;
  }

  while (left < middle) {
    printf("left = %d\n", left);
    printf("left_v = %d\n", cloned[left]);
    printf("new_pos = %d\n", new_pos);
    nums[new_pos] = cloned[left];
    left++;
    new_pos++;
  }
}

int main() {
  int nums[] = { 8, 4, 3, 7, 6, 5, 2, 1 };
  size_t len = sizeof(nums) / sizeof(nums[0]);

  merge_sort((int)len, nums);

  for (int i = 0; i <= len - 1; i++) {
    printf("%d", nums[i]);
  }

  return EXIT_SUCCESS;
}
