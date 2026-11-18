#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void selection_sort(int array_to_sort[], size_t array_length);

int main(void) {

  size_t capacity = 4;
  size_t count = 0;

  int *numbers = malloc(capacity * sizeof(*numbers));
  if (numbers == NULL) {
    fprintf(stderr, "memory allocation failed");
    exit(EXIT_FAILURE);
  }

  printf("enter a series of integers (enter a letter to stop): ");
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

  for (size_t i = 0; i < count; i++) {
    printf("%5d", numbers[i]);
  }
  printf("\n");

  selection_sort(numbers, count);

  for (size_t i = 0; i < count; i++) {
    printf("%-5d", numbers[i]);
  }
  printf("\ncount = %zu\ncapacity = %zu\n", count, capacity);

  free(numbers);
  return 0;
}

void selection_sort(int numbers_to_sort[], size_t count) {

  int max = INT_MIN;
  int index_to_replace = 0;
  for (size_t i = 0; i < count; i++) {
    if (numbers_to_sort[i] > max) {
      max = numbers_to_sort[i];
      index_to_replace = i;
    }
  }
  int tmp = numbers_to_sort[count - 1];
  numbers_to_sort[count - 1] = max;
  numbers_to_sort[index_to_replace] = tmp;

  count--;
  printf("%zu\n", count);
  sleep(2);
  if (count != 1) {
    selection_sort(numbers_to_sort, count);
  }
}
