/*
 * Name:    dimensional weight.
 * Purpose: Computes the dimensional weight of a box from input 
 * 	    provided by the user.
 * 	    In the US, the usual method to compute the dimensional 
 * 	    weight of a box is to divide the (cubic) volume by 166
 * 	    (the allowable number of cubic inches per pound), if 
 * 	    this number exceeds is actual weight, the shiping fee is
 * 	    based on the dimensioanl weight.
 * Author:  twissell
 */

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void) {

	int height, length, width, volume, weight;

	printf("Enter height of a box: ");
	scanf("%d", &height);
	
	printf("Enter length of a box: ");
	scanf("%d", &length);
	
	printf("Enter width of a box: ");
	scanf("%d", &width);

	volume = height * length * width;
	weight = (volume + INCHES_PER_POUND -1) / INCHES_PER_POUND;

	printf("valume (cubic inches): %d\n", volume);
	printf("dimensional weight (pounds): %d\n", weight);

	return 0;

}

