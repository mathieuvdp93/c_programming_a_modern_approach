#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 10
#define WIDTH 10

int main(void) {

  // seeding the rand function with current time, this needs to happen only once
  // in the program
  srand((unsigned)time(NULL));

  char board[LENGTH][WIDTH];
  for (int i = 0; i < LENGTH; i++) {
    for (int j = 0; j < WIDTH; j++) {
      board[i][j] = '.';
    }
  }

  int count = 0;
  int up_failure = 0;
  int down_failure = 0;
  int right_failure = 0;
  int left_failure = 0;
  int x_coord = 0;
  int y_coord = 0;

  board[0][0] = 'A';
  do {
    int success = 0;
    int direction = rand() % 4;

    switch (direction) {

    case 0:
      if (y_coord > 0 && board[x_coord][y_coord - 1] == '.') {
        y_coord -= 1;
        success = 1;
        break;
      } else {
        left_failure = 1;
        break;
      }
    case 1:
      if ((x_coord < (LENGTH - 1)) && board[x_coord + 1][y_coord] == '.') {
        x_coord += 1;
        success = 1;
        break;
      } else {
        up_failure = 1;
        break;
      }
    case 2:
      if (y_coord < WIDTH - 1 && board[x_coord][y_coord + 1] == '.') {
        y_coord += 1;
        success = 1;
        break;
      } else {
        right_failure = 1;
        break;
      }
    case 3:
      if (x_coord > 0 && board[x_coord - 1][y_coord] == '.') {
        x_coord -= 1;
        success = 1;
        break;
      } else {
        down_failure = 1;
        break;
      }
    }
    if (success == 1) {
      count++;
      board[x_coord][y_coord] = count + 'A';
      up_failure = 0;
      down_failure = 0;
      right_failure = 0;
      left_failure = 0;
    }
    if ((up_failure == 1) && (down_failure == 1) && (left_failure == 1) &&
        (right_failure == 1)) {
      printf("all directions blocked so stopped earlier.\n\n");
      break;
    }
  } while (count < 'Z' - 'A');

  for (int i = 0; i < LENGTH; i++) {
    for (int j = 0; j < WIDTH; j++) {
      printf("%c", board[i][j]);
    }
    printf("\n");
  }
  return 0;
}
