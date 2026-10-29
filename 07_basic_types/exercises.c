#include <stdio.h>

int main(void) {

  /*
   * EXERCISE 1:
   * Give the decimal value of each of the following interger constants.
   *
   * a. 077 ==>>  63
   * b. 0x77 ==>> 119
   * c. 0xabc ==>> 2748
   */

  /*
printf("%d\n", 077);
printf("%d\n", 0x77);
printf("%d\n", 0xabc);
  */

  /*
   * EXERCISE 2:
   * Which of the following are not legal constants in c? Clasify each legal
   * constant a either integer of floating point.
   * a. 010E2 ==>> not legal, floats cannot start with 0 // correction => floats
   * can start with 0 so it's legal. b. 32.1E+5 ==>> legal, double c. 0790 ==>>
   * legal, octal integer constant // correction => 9 is not a legal octal
   * number so it's not legal d. 100_000 ==>> not legal, _ cannot replace the
   * decimal point, for int constants they can only contain 0 - 9 so also not
   * legal e. 3.978e-2 ==>> legal, double
   */

  /*
   * EXERCISE 3:
   * Which of the following are not legal types in c?
   * a. short unsigned int ==>> not legal it's unsigned short int. // correction
   * => order of type specifiers does not matter so it's legal b. short float
   * ==>> not legal, does not exist c. long double ==>> legal d. unsigned long
   * ==>> legal
   */

  /*
   * EXERCISE 4:
   * If c is variable of type char, which one of the  following statements is
   * illegal? a. i += c; / i has type int / ==>> legal, char is an small int
   * type b. c = 2 * c - 1; ==>> legal c. putchar(c); ==>> legal d. printf(c);
   * ==>> not legal, printf needs a format argument which is a pointer to a
   * null-terminated byte string specifying how to interpret the data
   */

  /*
   * EXERCISE 5:
   * Which one of the following is not a legal way to write the number 65? (
   * Assume that the character set is ascii.) a. 'A' ==>> legal uppercase a is
   * ascii code 65 b. 0b1000001 ==>> legal in c23, before that some compilers
   * guaranteed it but it was not in the C standard c. 0101 ==>> legal, octal
   * representation of 65 d. 0x41 ==>> legal, hexadecimal representation of 65
   */

  /*
   * EXERCISE 6:
   * For each of the following items of data, specify which one of the types
   * char, short, int or long is the smallest one guaranteed to be large enough
   * to store the item. a. days in the month ==>> char b. days in a year ==>>
   * short c. minutes in a day ==>> short d. seconds in day ==>> int //
   * correction => long because int is only guaranteed to hold the same as
   * short, long is guaranteed to hold up to 32 bits
   */

  /*
   * EXERCISE 7:
   * EXERCISE 8:
   * For each of the following character escapes, give the equivalent octal
   * escape and the equivalent hexadecimal escape. ( Assume that the characte
   * set is ascii),
   *
   * a. \b ==>> \010, \x08
   * b. \n ==>> \012, \x0A
   * c. \r ==>> \015, \x0D
   * d. \t ==>> \011, \x09
   */

  /*
   * EXERCISE 9:
   * Suppose that i and j are variables of type int. What is the type of the
   * expression i/j + 'a'?
   *
   * The type will be int because 'a' will get promoted to int. // Correction
   * the type int was correct but 'a' in this case is already an int, i thought
   * it was a smaller int like int8_t but for that to be true it has to be
   * assigned to a char variable, if it is just 'a' thrown in an expression like
   * here it is the same as an int corresponding with it's ascii value( in this
   * case 97).
   */

  /*
   * EXERCISE 10:
   * Suppose that i is a variable of type int. j is a variable of type long ,
   * and k is a variable of type unsigned int. What it hte type ot the
   * expression i + (int) j * k?
   *
   * the int cast of j would happen first, then j would be promoted to unsigned
   * int and then i would be promoted to unsigned int too, so the result would
   * be unsigned int.
   */

  /*
   * EXERCISE 11:
   * Suppose that i is a variable of type int. f is a variable of type float.
   * and d is a variable of type double. What is the type of the expression i *
   * f / d?
   *
   * first i * f will be evaluated and this will convert i to float and that
   * result would be divided by d which will be a double, so the result would be
   * a double.
   */

  /*
   * EXERCISE 12:
   * Suppose that i is a variable of type int. f is a variable of type float.
   * and d is a variable of type double. Explain what conversions take place
   * during the excecution of the following statement: d = i + f;
   *
   * the first conversion would be i to float to calculate i + f and then the
   * result of that would be converted to double because that's the type of d.
   */

  /*
   * EXERCISE 13:
   * Assume that a program contains the following declarations:
   * char c = '\1';
   * short s = 2;
   * int i = -3;
   * long m = 5;
   * float f =6.5f;
   * double d = 7.5;
   *
   * Give the value and the type of each expression listed below:
   *
   * a. c * i ==>> -3, int
   * b. s + m ==>> 7, long
   * c. f / c ==>> 6.5, float
   * d. d /s ==>> 3.75, double
   * e. f - d ==>> -1, double
   * f. (int)f ==>> 6, int
   */

  /*
   * EXERCISE 14:
   * Does the following statement always compute the fractional part of f
   * correctly. (assuming that f and frac_part are float variables)? frac_part =
   * f - (int) f; If not, what's the problem?
   *
   * if f is too large to fit in int than type casting that to int is undefined
   * behavior. so then it won't work.
   */

  /* EXERCISE 15:
   * Use typedef to create types named Int8, Int16, and Int32. Define the types
   * so that they represent 8-bit, 16-bit and 32-bit integers on your machine.
   *
   * typedef int8_t Int8;
   * typedef int16_t Int16;
   * typedef int32_t Int32;
   */

  return 0;
}
