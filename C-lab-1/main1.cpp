#include "task1.h"
#include <stdio.h>

int main()
{
	char gender;
	printf("Enter your gender 'w' or 'm':\n");
	scanf("%c", &gender);
	float height;
	printf("Enter your height (cm):\n");
	scanf("%f", &height);
	float weight;
	printf("Enter your weight (kg):\n");
	scanf("%f", &weight);

	if (getRecommendation(gender, height, weight) > 0)
		printf("You need to lose weight!\n");
	else if (getRecommendation(gender, height, weight) < 0)
		printf("You need to get fat!\n");
	else
		printf("You have an ideal weight!\n");
	return 0;

}