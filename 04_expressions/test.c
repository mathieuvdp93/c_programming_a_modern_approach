#include <stdio.h>

int main(void) {
  int i = 5;
  int j = 3;
  printf("%d %d\n", i / j, i % j);

  int i2 = 2;
  int j2 = 3;
  printf("%d\n", (i2 + 10) % j);

  int i3 = 7;
  int j3 = 8;
  int k3 = 9;
  printf("%d\n", (i3 + 10) % k3 / j3);

  int i4 = 1;
  int j4 = 2;
  int k4 = 3;
  printf("%d\n", (i4 + 5) % (j4 + 2) / k4);

  int div_89;
  div_89 = -8 / 5;
  printf("%d\n", div_89);

  int div;
  div = -8 / -5;
  printf("%d\n", div);

  int i5 = 7;
  int j5 = 8;
  i5 *= j5 + 1;
  printf("%d %d\n", i5, j5);

  int i6, j6, k6;
  i6 = j6 = k6 = 1;
  i6 += j6 += k6;
  printf("%d %d %d\n", i6, j6, k6);

  int i7 = 1;
  int j7 = 2;
  int k7 = 3;
  i7 -= j7 -= k7;
  printf("%d %d %d\n", i7, j7, k7);

  int i8 = 2;
  int j8 = 1;
  int k8 = 0;
  i8 *= j8 *= k8;
  printf("%d %d %d\n", i8, j8, k8);

  int i9 = 6;
  int j9 = i9 += i9;
  printf("%d %d\n", i9, j9);

  int i10 = 5;
  int j10 = (i10 -= 2) + 1;
  printf("%d %d\n", i10, j10);

  int i11 = 7;
  int j11 = 6 + (i11 = 2.5);
  printf("%d %d\n", i11, j11);

  int i12 = 2;
  int j12 = 8;
  j12 = (i12 = 6) + (j12 = 3);
  printf("%d %d\n", i12, j12);

  int i13 = 1;
  printf("%d\n", i13++ - 1);
  printf("%d\n", i13);

  int i14 = 10;
  int j14 = 5;
  printf("%d\n", i14++ - ++j14);
  printf("%d %d\n", i14, j14);

  int i15 = 7;
  int j15 = 8;
  printf("%d\n", i15++ - --j15);
  printf("%d %d\n", i15, j15);

  int i16 = 3;
  int j16 = 4;
  int k16 = 5;
  printf("%d\n", i16++ - j16++ + --k16);
  printf("%d %d %d\n", i16, j16, k16);

  return 0;
}
