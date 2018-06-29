#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

typedef struct cell {
  int64_t value;
  struct cell *next;
} cell;

cell* array_to_list(size_t len, int64_t nums[]) {
  cell *r = malloc(sizeof(cell));
  r->value = nums[0];

  cell *curr = r;

  for (int64_t i = 1; i <= len - 1; i++) {
    cell *c = malloc(sizeof(cell));
    c->value = nums[i];
    c->next = NULL;
    curr->next = c;
    curr = c;
  }

  return r;
}


int main() {
  int64_t nums[] = { 1, 2, 3, 4, 5, 6 };
  size_t len = sizeof(nums) / sizeof(nums[0]);

  cell *l = array_to_list(len, nums);
  cell *c = l;

  while (c != NULL) {
    printf("v = %lld\n", c->value);
    cell *t = c;
    c = c->next;
    free(t);
  }

  return EXIT_SUCCESS;
}
