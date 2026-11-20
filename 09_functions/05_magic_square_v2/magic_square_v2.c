#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *create_magic_square(size_t n);
void fill_magic_square(int *magic_square, size_t n);
void print_magic_square(int *magic_square, size_t n);
static inline size_t idx(int row, int col, size_t row_length);

int main(void) {

  size_t ms_length = 0;

  printf("Enter an odd number: ");
  fflush(stdout);

  scanf("%zu", &ms_length);

  int *ms = create_magic_square(ms_length);
  printf("size of ms: %zu\n sizeof ms[0]: %zu\nsizeof ms[1][3]: %zu\n",
         sizeof(ms), sizeof(ms[0]), sizeof(ms[idx(1, 3, ms_length)]));

  // fill_magic_square(ms, ms_length);
  // print_magic_square(ms, ms_length);

  free(ms);
  return 0;
}

int *create_magic_square(size_t dimension) {

  int *ms = malloc(dimension * dimension * sizeof(int));
  if (ms == NULL) {
    fprintf(stderr, "allocating ms failed\n");
    exit(EXIT_FAILURE);
  }

  memset(ms, 0, dimension * dimension);

  return ms;
}

static inline size_t idx(int row, int col, size_t row_length) {
  return row * row_length + col;
}
