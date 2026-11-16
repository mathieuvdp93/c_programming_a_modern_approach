#include <stdio.h>
#include <string.h>

int main(void) {

  int size_magic_square;

  printf("Enter the size of the magic array: ");
  fflush(stdout);

  scanf("%d", &size_magic_square);

  int magic_square[size_magic_square][size_magic_square];

  memset(magic_square, 0,
         sizeof(magic_square)); // this works because sizeof(magic_square) =
                                // rows * colls * sizeof(int)

  int row = 0;
  int col = size_magic_square / 2;

  for (int i = 1; i <= size_magic_square * size_magic_square; i++) {

    if (magic_square[row][col] != 0) {

      row = (row + 2) % size_magic_square;
      col = (col - 1 + size_magic_square) % size_magic_square;

      /* first solution with if/else
if (size_magic_square - row == 2) {
row = 0;
} else if (size_magic_square - row == 1) {
row = 1;
} else {
row += 2;
}
if (col != 0) {
col--;
} else {
col = size_magic_square - 1;
}
      */
    }

    magic_square[row][col] = i;

    row = (row - 1 + size_magic_square) % size_magic_square;
    col = (col + 1) % size_magic_square;

    /*
     * part of first solution with if/else
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
    */
  }

  for (int i = 0; i < size_magic_square; i++) {
    for (int j = 0; j < size_magic_square; j++) {
      printf("%3d", magic_square[i][j]);
    }
    printf("\n");
  }

  return 0;
}

// TODO: rewrite the if/else statements using %
