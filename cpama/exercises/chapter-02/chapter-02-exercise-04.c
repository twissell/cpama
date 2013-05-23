/*
 * Name:    add tax
 * Purpose: add a tax percentage to base price.
 * Author:  twissell
 */

#include <stdio.h>

int main(void) {

	float base, tax, percentage, new_price;

	printf("Enter a base price: \n");
	scanf("%f", &base);

	printf("Enter a tax: \n");
	scanf("%f", &tax);

	percentage = 100 * tax / base;
	new_price = base + percentage;

	printf("Price with tax added: %.2f\n", new_price);
	return 0;

}

