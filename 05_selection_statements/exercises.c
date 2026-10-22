#include <stdio.h>

int main(void) {

  int i;
  int j;
  int k;

  /*
   * EXERCISE 1.
   * THe following program fragments illustrate the relational and  equality
   * operators. Show the output produced by each, assuming that i, j and k are
   * int variables
   */

  /*
i = 2;
j = 3;
k = i * j == 6;
printf("%d\n", k);
  */

  /*
   * 1st attempt: k = ((i * j) == 6) ; so k should be 1;
   */

  /*
i = 5;
j = 10;
k = 1;
printf("%d\n", k > i < j);
  */

  /*
   * 1st attempt: (k > i) < j; so it should be 1;
   */

  /*
i = 3;
j = 2;
k = 1;
printf("%d\n", i < j == j < k);
  */

  /*
   * 1st attempt: (i <j) == ( j<k); so it should be 1
   */

  /*
i = 3;
j = 4;
k = 5;
printf("%d\n", i % j + i < k);
  */

  /*
   * 1st attempt: ((i % j) + i) < k; so it should be 0;
   */

  /*
   * EXERCISE 2:
   * The following program fragments illustrate the logical operators. Show the
   * output produced by each, assuming that i, j and k are int variables.
   */

  /*
i = 10;
j = 5;
printf("%d\n", !i < j);
  */

  /*
   * 1st attempt: (!i) < j; so it should be 1;
   */

  /*
i = 2;
j = 1;
printf("%d\n", !!i + !j);
  */

  /*
   * 1st attempt: (!(!i)) + (!j); so it should be 1;
   */

  /*
i = 5;
j = 0;
k = -5;
printf("%d\n", i && j || k);
  */

  /*
   * 1st attempt: (i && j) || k; so it should be 1;
   */

  /*
i = 1;
j = 2;
k = 3;
printf("%d\n", i < j || k);
  */

  /*
   * 1st attempt: ( i < j) || k); so it should be 1;
   */

  /*
   * EXERCISE 3:
   * The following program fragments illustrate the short-circuit behavior of
   * logical expressions. Show the output produced by each assuming that i, j
   * and k are int variables.
   */

  /*
i = 3;
j = 4;
k = 5;
printf("%d ", i < j || ++j < k);
printf("%d %d %d\n", i, j, k);
  */

  /*
   * 1st attempt: first number will be 1 because i < j is true and ++j will not
   * happen because short-circuit of || statement, so full output will be 1 3
   * 4 5.
   */

  /*
i = 7;
j = 8;
k = 9;
printf("%d ", i - 7 && j++ < k);
printf("%d %d %d\n", i, j, k);
  */

  /*
   * 1st attempt: i - 7 will evaluate to 0 so the && statement will
   * short-circuit, so the output will be 0 7 8 9.
   */

  /*
i = 7;
j = 8;
k = 9;
printf("%d ", (i = j) || (j = k));
printf("%d %d %d\n", i, j, k);
  */

  /*
   * 1st attempt: it will assign j to i which is not 0 so the || will
   * short-circuit, the output will be 1 8 8 9.
   */

  /*
i = 1;
j = 1;
k = 1;
printf("%d ", ++i || ++j && ++k);
printf("%d %d %d\n", i, j, k);
  */

  /*
   * 1st attempt: ++i || (++j && ++k);, the ++j will happen first since this is
   * not 0 ++k will happen then then result of the && statement will be 1, but i
   * think the ++i statement will still happen even though we already know that
   * the right side of the || statement evaluates to 1 because these statements
   * evaluate from left to right for the short-circuit. so the result will be 1
   * 2 2 2.
   *
   * i was wrong the  result came back as 1 2 1 1.
   *
   * 2nd attempt: my next answer would have been (++i || ++j) && ++k because
   * maybe the presendence means that instead of putting parentheses around it,
   * it could mean to evaluate everything left fom it first. but then it would
   * be 1 && ++k and would still need to check to ++k but that hasn't happened
   * in the result. Found the mistake: ++i || (++j && ++k); is correct but i
   * made the mistake of evaluating the parentheses first, the order of
   * precedence is not the same as the order of evaluation, the brackets do not
   * mean that it has to be evaluated first. precedence just determines the
   * grouping not which gets evaluated first. so instead it evaluates ++i first
   * and since that is not 0, the || statement short-circuits. and the result is
   * 1 2 1 1.
   */

  /*
   * EXERCISE 4:
   * Write a single expression whose value is either -1, 0, or +1, depending on
   * whether i is less than, equal to , or greater than j, respectevily.
   */

  /*
   * 1st attempt: brute forced it to get (-2 * ( i < j)) + (-1 * ( i==j)) + 1
   *
   * 2nd attempt: found more elegant ( i > j ) - (i < j);
   */

  /*
   * EXERCISE 6:
   * Is the following if statement legal?
   * if ( n == 1-10) {
   * 	printf("n is between 1 and 10\n");
   * 	}
   *
   * If so, what does it do when n is equal to 5?
   */

  /*
int n = -9;
if (n == 1 - 10) {
printf("n is between 1 and 10\n");
}
  */
  /*
   * 1st attempt: yes i think it is legal, it will compare n to 1 - 10 (so -9),
   * so it the if statement will only be executed when n is -9 and not when n is
   * in between 1 and 10 like the programmer intended. so if n is 5 nothing will
   * happen.
   */
  return 0;
}
