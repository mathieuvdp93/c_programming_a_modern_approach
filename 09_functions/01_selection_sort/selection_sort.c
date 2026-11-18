#include <stdio.h>
#include <stdlib.h>

void selection_sort(int array_to_sort[], int array_length);

int main(void) {

  int capacity = 4;
  int count = 0;

  int *numbers = malloc(capacity * sizeof(*numbers));
  if (numbers == NULL) {
    fprintf(stderr, "memory allocation failed");
    exit(EXIT_FAILURE);
  }

  printf("enter a series of integers: ");
  fflush(stdout);

  int value;
  while (scanf("%d", &value) == 1) {

    if (count == capacity) {

      size_t new_capacity = capacity * 2;

      int *tmp = realloc(numbers, new_capacity * sizeof(*numbers));
      if (tmp == NULL) {
        fprintf(stderr, "memory reallocation failed");
        exit(EXIT_FAILURE);
      }

      numbers = tmp;
      capacity = new_capacity;
    }

    // can shorten two statements to numbers[count++] = value; but this is more
    // clear to me
    numbers[count] = value;
    count++;
  }

  // just to test
  for (int i = 0; i < count; i++) {
    printf("%5d", numbers[i]);
  }
}
