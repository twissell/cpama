/*
 * Name:    polynomial with Horner's rule
 * Purpose: asks the user for a value for x and work out
 *          the equation using Horner's rule, note that 
 *          performs fewer multiplications.
 * Author:  twissell
 */

#include <stdio.h>

int main(void) {

  float x, result;

  printf("Enter a value for x:\n");
  scanf("%f", &x);

  printf("Working out the value of ((((3x + 2) x - 5) x - 1) x + 7) x - 6\n");
  result = ((((3 * x + 2) x - 5) x - 1) x + 7) x - 6;
  
  printf("%.2f\n", result);
	return 0;

}
