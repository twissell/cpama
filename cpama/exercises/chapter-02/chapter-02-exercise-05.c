/*
 * Name:    polynomial
 * Purpose: asks the user for a value for x and work out the 
 *          equation.
 * Author:  twissell
 */

#include <stdio.h>

int main(void) {

  float x, result;

	printf("Enter a value for x:\n");
  scanf("%f", &x);
  
  printf("Working out the value of 3x**5 + 2x**4 - 5x**3 - x**2 + 7x - 6\n");
  result = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
  printf("%.2f\n", result);
  return 0;

}

