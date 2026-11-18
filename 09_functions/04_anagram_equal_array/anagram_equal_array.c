#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define ALPHABET_LENGTH 26

void read_words(int counts[ALPHABET_LENGTH]);
bool equal_array(int counts1[ALPHABET_LENGTH], int counts2[ALPHABET_LENGTH]);

int main(void) {

  int counts1[ALPHABET_LENGTH] = {0};
  int counts2[ALPHABET_LENGTH] = {0};

  read_words(counts1);
  read_words(counts2);

  bool result = equal_array(counts1, counts2);

  if (result == true) {
    printf("The words are anagrams\n");
  } else {
    printf("The words are not anagrams\n");
  }

  return 0;
}

void read_words(int counts[ALPHABET_LENGTH]) {

  printf("enter your word: ");
  fflush(stdout);

  int ch;
  while (isalpha(ch = getchar())) {
    counts[tolower(ch) - 'a']++;
  }
}

bool equal_array(int counts1[ALPHABET_LENGTH], int counts2[ALPHABET_LENGTH]) {

  for (int i = 0; i < ALPHABET_LENGTH; i++) {
    if (counts1[i] != counts2[i]) {
      return false;
    }
  }
  return true;
}
