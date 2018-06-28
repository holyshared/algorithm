#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "time.h"
#include <sys/time.h>

#define NOT_FOUND -1




int64_t liner_search(int64_t v, size_t len, int64_t nums[]) {
  int64_t i = 0;

  while (nums[i] != v && i < len) {
    i++;
  }

  if (i >= len) {
    return NOT_FOUND;
  }

  return i;
}


int64_t fast_liner_search(int64_t v, size_t len, int64_t nums[]) {
  int64_t i = 0;

  int64_t last = nums[len - 1];
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


int64_t microtime() {
  struct timeval currentTime;
  gettimeofday(&currentTime, NULL);
  return (currentTime.tv_sec * 1000000) + currentTime.tv_usec;
}

int main() {
  int64_t nums[1000000];
  size_t len = sizeof(nums) / sizeof(nums[0]);

  srand((uint64_t)time(NULL));

  for (int64_t i = 0; i <= len - 1; i++) {
    nums[i] = rand();
  }

  time_t st;
  time_t et;
  int64_t result;

  st = microtime();
  result = liner_search(nums[len - 1], len, nums);
  et = microtime();
  printf("time: %ld\n", et - st);
  printf("%lld\n", result);

  st = microtime();
  result = liner_search(-1, len, nums);
  et = microtime();
  printf("time: %ld\n", et - st);
  printf("%lld\n", result);

  st = microtime();
  result = fast_liner_search(nums[len - 1], len, nums);
  et = microtime();
  printf("time: %ld\n", et - st);
  printf("%lld\n", result);

  st = microtime();
  result = fast_liner_search(-1, len, nums);
  et = microtime();
  printf("time: %ld\n", et - st);
  printf("%lld\n", result);

  return EXIT_SUCCESS;
}
