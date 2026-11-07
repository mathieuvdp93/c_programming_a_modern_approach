#include <stdio.h>

int main(void) {

  int digit_array[10] = {0};

  int user_input = 0;

  printf("Enter an integer: ");
  fflush(stdout);

  scanf("%d", &user_input);

  do {
    int digit = user_input % 10;
    digit_array[digit]++;
    user_input /= 10;
  } while (user_input > 0);

  printf("digit:\t\t\t");
  for (int i = 0; i < 10; i++) {
    printf("%3d", i);
  }
  printf("\n");
  printf("occurences:");
  for (int j = 0; j < 10; j++) {
    printf("%3d", digit_array[j]);
  }
  printf("\n");

  return 0;
}
