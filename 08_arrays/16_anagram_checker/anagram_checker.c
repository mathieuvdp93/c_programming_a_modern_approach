#include <ctype.h>
#include <stdio.h>

#define ALPHABET_LENGTH 26
#define MAX_WORD_LENGTH 100

int main(void) {

  int letter_counter[ALPHABET_LENGTH] = {0};
  char first_word[MAX_WORD_LENGTH];
  char second_word[MAX_WORD_LENGTH];

  printf("Enter first word: ");
  fflush(stdout);

  scanf("%s", first_word);

  for (size_t i = 0; i < sizeof(first_word); i++) {

    char ch = tolower(first_word[i]);
    if (isalpha(ch)) {
      letter_counter[ch - 'a']++;
    }
  }

  printf("Enter second word: ");
  fflush(stdout);

  scanf("%s", second_word);

  for (size_t i = 0; i < sizeof(second_word); i++) {

    char ch = tolower(second_word[i]);
    if (isalpha(ch)) {
      letter_counter[ch - 'a']--;
    }
  }

  _Bool anagram = 1;
  for (int i = 0; i < ALPHABET_LENGTH; i++) {
    if (letter_counter[i] != 0) {
      anagram = 0;
      break;
    }
  }
  if (anagram == 0) {
    printf("The words are not anagrams.\n");
  } else {
    printf("The words are anagrams.\n");
  }
  return 0;
}
