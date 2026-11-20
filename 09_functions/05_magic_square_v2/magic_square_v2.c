#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *create_magic_square(size_t n);
void fill_magic_square(int *magic_square, size_t n);
void print_magic_square(const int *magic_square, size_t n);
static inline size_t idx(int row, int col, size_t row_length);

int main(void) {

  size_t ms_length = 0;

  printf("Enter an odd number: ");
  fflush(stdout);

  scanf("%zu", &ms_length);

  int *ms = create_magic_square(ms_length);

  fill_magic_square(ms, ms_length);
  print_magic_square(ms, ms_length);

  free(ms);
  return 0;
}

int *create_magic_square(size_t dimension) {

  int *ms = malloc(dimension * dimension * sizeof(int));
  if (ms == NULL) {
    fprintf(stderr, "allocating ms failed\n");
    exit(EXIT_FAILURE);
  }

  memset(ms, 0, dimension * dimension * sizeof(*ms));

  return ms;
}

static inline size_t idx(int row, int col, size_t row_length) {
  return row * row_length + col;
}

void fill_magic_square(int *ms, size_t length) {

  size_t row = 0;
  size_t col = length / 2;

  for (size_t i = 1; i <= length * length; i++) {

    if (ms[idx(row, col, length)] != 0) {
      row = (row + 2) % length;
      col = (col + length - 1) % length;
    }

    ms[idx(row, col, length)] = (int)i;

    row = (row + length - 1) % length;
    col = (col + 1) % length;
  }
}

void print_magic_square(const int *ms, size_t length) {

  for (size_t i = 0; i < length; i++) {
    for (size_t j = 0; j < length; j++) {
      printf("%d\t", ms[idx(i, j, length)]);
    }
    printf("\n");
  }
}
