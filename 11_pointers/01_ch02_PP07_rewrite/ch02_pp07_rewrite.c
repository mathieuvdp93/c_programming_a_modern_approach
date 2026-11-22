#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
  int twenties, tens, fives, ones;
  int user_input = 0;

  printf("Enter a dollar amount: ");
  fflush(stdout);

  scanf("%d", &user_input);

  pay_amount(user_input, &twenties, &tens, &fives, &ones);

  printf("20's: %d\n10's: %d\n5's: %d\n1's: %d\n", twenties, tens, fives, ones);
  return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {

  *twenties = dollars / 20;
  *tens = (dollars % 20) / 10;
  *fives = ((dollars % 20) % 10) / 5;
  *ones = (((dollars % 20) % 10) % 5);
}
