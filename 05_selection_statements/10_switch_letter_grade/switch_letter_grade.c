#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int32_t num_grade;
  printf("Enter numerical grade: ");
  scanf("%d", &num_grade);

  if (num_grade < 0 || num_grade > 100) {

    printf("not a valid numerical grade\n");
    exit(1);
  }

  printf("Letter grade: ");
  switch (num_grade / 10) {
  case 10:
  case 9:
    printf("A");
    break;
  case 8:
    printf("B");
    break;
  case 7:
    printf("C");
    break;
  case 6:
    printf("D");
    break;
  case 5:
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
    printf("F");
    break;
  default:
    printf("not valid numerical grade");
    break;
  }
  printf("\n");

  return 0;
}
