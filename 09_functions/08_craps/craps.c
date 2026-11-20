#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int roll_dice(void);
bool play_game(void);

int main(void) {

  srand(time(NULL));
  int wins = 0;
  int losses = 0;
  char keep_going = 'y';

  while (tolower(keep_going) == 'y') {
    if (play_game()) {
      wins++;
    } else {
      losses++;
    }

    printf("Play again?: ");
    fflush(stdout);

    scanf("%c", &keep_going);
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
      ;
    }
  }

  printf("wins: %d \tlosses: %d\n", wins, losses);
}

int roll_dice(void) {

  int sum = ((rand() % 6) + 1) + ((rand() % 6) + 1);
  return sum;
}

bool play_game(void) {

  int roll = roll_dice();
  printf("you rolled: %d\n", roll);
  int point = 0;

  if (roll == 7 || roll == 11) {

    printf("you win\n");
    return true;
  } else if (roll == 2 || roll == 3 || roll == 12) {
    printf("you lose\n");
    return false;
  } else {
    point = roll;
    printf("your point: %d\n", point);
  }

  do {
    roll = roll_dice();
    printf("you rolled: %d\n", roll);
    sleep(1);
  } while (roll != point && roll != 7);

  if (roll == point) {

    printf("you win\n");
    return true;
  }
  if (roll == 7) {
    printf("you lose\n");
    return false;
  }
  exit(EXIT_FAILURE);
}
