/*
 * Name:    dollar bill calculator.
 * Purpose: calculates the less possible combinations
 *          of dollar bills to pay a given amount.
 * Author:  twissell
 */

#include <stdio.h>

int main(void) {

  int amount, surplus, bill_20, bill_10, bill_5, bill_1;

  printf("Enter a dollar amount:\n");
  scanf("%d", &amount);

  bill_20 = amount / 20;
  surplus = amount - (bill_20 * 20);
  
  bill_10 = surplus / 10;
  surplus = surplus - (bill_10 * 10);  

  bill_5 = surplus / 5;
  surplus = surplus - (bill_5 * 5);

  bill_1 = surplus / 1;
  

  printf("$20 bills: %d\n", bill_20);
  printf("$10 bills: %d\n", bill_10);
  printf(" $5 bills: %d\n", bill_5);
  printf(" $1 bills: %d\n", bill_1);
	return 0;

}

