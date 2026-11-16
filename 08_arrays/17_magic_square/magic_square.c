#include <stdio.h>
#include <string.h>

int main(void) {

  int size_magic_square;
  int magic_square[size_magic_square][size_magic_square];

  memset(magic_square, 0,
         sizeof(magic_square)); // this works because sizeof(magic_square) =
                                // rows * colls * sizeof(int)

  printf("Enter the size of the magic array: ");
  fflush(stdout);

  scanf("%d", &size_magic_square);

  for (int i = 1; i <= size_magic_square * size_magic_square; i++) {
    int row = 0;
    int col = (size_magic_square / 2) + 1;

    if (magic_square[row][col] != 0) {
      row++;
    }
    magic_square[row][col] = i;

    if (row != 0) {
      row--;
    } else {
      row = size_magic_square - 1;
    }

    if (col != size_magic_square - 1) {
      col++;
    } else {
      col = 0;
    }
  }

  return 0;
}
