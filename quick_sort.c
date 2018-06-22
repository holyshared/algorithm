#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "time.h"

void quick_sort(int first, int last, int nums[]) {
  if (first >= last) {
    return;
  }

  /**
   * first, last間の中間値を利用する
   * first + (last - first) / 2
   */
  int div = first + (last - first)/2;
  int base = nums[div];
  int lower = first;
  int upper = last;

  while (true) {
    while (nums[lower] < base) {
      lower++;
    }
    while (nums[upper] > base) {
      upper--;
    }

    if (lower >= upper) {
      break;
    }

    int temp = nums[lower];
    nums[lower] = nums[upper];
    nums[upper] = temp;
    lower++;
    upper--;
  }

  quick_sort(first, lower - 1, nums);
  quick_sort(upper + 1, last, nums);
}

void print_array(int nums[], size_t len) {
  for (int i = 0; i <= len - 1; i++) {
    printf("%d\n", nums[i]);
  }
}

void random_quick_sort() {
  int nums[9];
  size_t size = sizeof(nums) / sizeof(nums[0]);

  srand((unsigned int)time(NULL));

  for (int i = 0; i <= size - 1; i++) {
    nums[i] = rand();
  }

  quick_sort(0, (int)size - 1, nums);
  print_array(nums, size);
}

void short_range_quick_sort() {
  int nums[] = { 9, 8 };
  size_t size = sizeof(nums) / sizeof(nums[0]);

  quick_sort(0, (int)size - 1, nums);
  print_array(nums, size);
}

void one_element_quick_sort() {
  int nums[] = { 9 };
  size_t size = sizeof(nums) / sizeof(nums[0]);

  quick_sort(0, (int)size - 1, nums);
  print_array(nums, size);
}

int main() {
  random_quick_sort();
  short_range_quick_sort();
  one_element_quick_sort();

  return EXIT_SUCCESS;
}
