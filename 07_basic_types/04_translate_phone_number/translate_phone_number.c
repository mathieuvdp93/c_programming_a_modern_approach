#include <stdio.h>

int main(void) {

  // const means it can't be changed, static here inside the function means that
  // it only gets initialized once even if the function gets called multiple
  // times
  static const char keypad[] = "2223334445556667Q77888999Z";
  int ch;

  printf("Enter a phone number: ");
  fflush(stdout);

  while ((ch = getchar()) != '\n' && ch != EOF) {
    if (ch >= 'A' && ch <= 'Z') {
      ch = keypad[ch - 'A'];
    }
    putchar(ch);
  }
  putchar('\n');

  return 0;
}

/*
 * first solution, works but is little bit fragile and very verbose
int ch = 0;

while ((ch = getchar()) != '\n' && ch != EOF) {

if (ch < 65 || ch > 89 || ch == 81) {
printf("%c", ch);
continue;
}

switch (ch) {
case 65:
case 66:
case 67:
printf("%d", 2);
break;
case 68:
case 69:
case 70:
printf("%d", 3);
break;
case 71:
case 72:
case 73:
printf("%d", 4);
break;
case 74:
case 75:
case 76:
printf("%d", 5);
break;
case 77:
case 78:
case 79:
printf("%d", 6);
break;
case 80:
case 82:
case 83:
printf("%d", 7);
break;
case 84:
case 85:
case 86:
printf("%d", 8);
break;
case 87:
case 88:
case 89:
printf("%d", 9);
break;
}
}
printf("\n");
}
*/
