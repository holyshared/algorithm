#include "stdint.h"
#include "stdlib.h"

typedef struct cell {
  int64_t value;
  struct cell *next;
} cell;


int main() {
  return EXIT_SUCCESS;
}
