#include <stdio.h>

int main(void) {

  /*
   * EXERCISE 1:
   * The following program outline shows only function defenitions and variable
   * declarations. int a;
   *
   * void f(int b) {
   * 	int c;
   * }
   * void g(void){
   *  int d;
   *  {
   *   int e;
   *  }
   * }
   * int main(void) {
   * 	int f;
   * 	}
   *
   * For each of the following scopes, list all variable and parameter names
   * visible in that scope:
   */

  /*
   * 1st attempt:
   * func f: a, b ,c
   * func g: a, d
   * block in which e is declared: a, d ,e
   * main func: a, f
   */

  /*
   * EXERCISE 2:
   * The following program outline shows only function defenitions and variable
   * declarations.
   *
   * int b, c;
   * void f(void) {
   * 	int b,d;
   * }
   * void g( int a) {
   * 	int c;
   * 	{
   * 		int a, d;
   * 	}
   * }
   * int main(void) {
   * 	int c, d;
   * 	}
   *
   * for each of the following scopes, list all vaiable and parameter names
   * visible in that scope. If there's more than one variable of parameter with
   * the same name, indicate which one is visible.
   */

  /*
   * 1st attempt:
   * func f:b(declared in f), c, d
   * func g:a, c (declared in g)
   * block in which a and d are declared: a(declared here), b, c(declared in g),
   * d main func: b, c(declared here), d
   */

  /*
   * EXERCISE 3:
   * Suppose that a program has ony one function (main). How many different
   * variables named i could this program contain.
   */

  /*
   * 1st attempt:
   * an infinite amount, you can just add for loops and every for loop can have
   * it's own variable named i.
   *
   * bit nicer way of saying it: the program can have 1 at the file scope
   * outside the function and then for every block in the function, which there
   * is no limit on, it can have 1 more.
   */
