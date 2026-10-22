#include <stdio.h>

int main(void) {

  int day, month, year;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("%02d/%02d/%04d\n", day, month, year);

  return 0;
}
