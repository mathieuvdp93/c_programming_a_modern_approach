#include <stdint.h>
#include <stdio.h>

int main(void) {

  int32_t i1, i2, i3, i4;
  int32_t max, min;
  int32_t max12, min12, max34, min34;

  printf("enter 4 integers: ");
  scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

  if (i1 < i2) {
    min12 = i1;
    max12 = i2;
  } else {
    min12 = i2;
    max12 = i1;
  }
  if (i3 < i4) {
    min34 = i3;
    max34 = i4;
  } else {
    min34 = i4;
    max34 = i3;
  }

  /*
if (min12 < min34) {
min = min12;
} else {
min = min34;
}
if (max12 < max34) {
max = max34;
} else {
max = max12;
}
  */

  min12 < min34 ? (min = min12) : (min = min34);
  max12 < max34 ? (max = max34) : (max = max12);

  printf("min = %d\t max = %d\n", min, max);

  return 0;
}
