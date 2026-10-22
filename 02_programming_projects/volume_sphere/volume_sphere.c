#include <stdio.h>

int calculate_sphere_with_ints(int radius);
float calculate_sphere_with_floats(float radius);

int main() {

  int user_input_int;
  float user_input_float;

  printf("enter an integer: ");
  scanf("%d", &user_input_int);
  printf("enter a float: ");
  scanf("%f", &user_input_float);

  int result_int = calculate_sphere_with_ints(user_input_int);
  float result_float = calculate_sphere_with_floats(user_input_float);

  printf("the result with int was: %d \n", result_int);
  printf("the result with float was: %f \n", result_float);
}

int calculate_sphere_with_ints(int r) {

  // ints get converted to float
  // float result = 4 / 3 * 3.14 * r * r * r;

  // here also ints get first converted to floats and then the result gets
  // converted back to int because that the return type of the function
  float result;
  result = 4 / 3 * 3.8;
  printf("test int division: %f\n", result);
  return 4.0f / 3.0f * 3.14 * r * r * r;
}

float calculate_sphere_with_floats(float r) {
  return 4.0 / 3.0 * 3.14 * r * r * r;
}
