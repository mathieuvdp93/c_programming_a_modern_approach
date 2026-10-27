#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

_Bool validate_cl_input(char *, long *);
long calculate_gcd(long, long);

int main(int argc, char *argv[]) {

  if (argc <= 2) {
    printf("not enough command line args provided");
    exit(1);
  }
  long user_input_array[argc - 1];

  for (int i = 1; i < argc; i++) {
    if (!validate_cl_input(argv[i], &user_input_array[i - 1])) {
      exit(1);
    }
    printf("%ld\n", user_input_array[i - 1]);
  }

  long gcd = calculate_gcd(user_input_array[0], user_input_array[1]);

  printf("gcd is: %ld\n", gcd);

  return 0;
}

_Bool validate_cl_input(char *clinput, long *out) {

  long result;
  char *end_ptr;
  errno = 0;

  result = strtol(clinput, &end_ptr, 10);

  if (errno == ERANGE) {
    printf("value out of range");
    return 0;
  } else if (clinput == end_ptr) {
    printf("no valid entry");
    return 0;
  } else if (*end_ptr != '\0') {
    printf("value not fully converted");
    return 0;
  }

  *out = result;
  return 1;
}

long calculate_gcd(long m, long n) {

  long tmp;

  while (n != 0) {
    tmp = m % n;
    m = n;
    n = tmp;
  }

  return m;
}
