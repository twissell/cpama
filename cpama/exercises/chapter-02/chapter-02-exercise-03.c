/*
 * Name:    sphere volume
 * Purpose: computes the volume of a sphere.
 * Author:  twissell
 */

#include <stdio.h>

int main(void) {

	float radius, volume;
	float pie = 3.14159f;

	printf("Enter the radius of a sphere: \n");
	scanf("%f", &radius);
	
	volume = (4.0f / 3.0f) * pie * radius * radius * radius;
	printf("The volume of the sphere is: %.4f\n", volume);	
	return 0;

}

