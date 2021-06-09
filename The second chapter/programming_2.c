#include<stdio.h>

int main()
{
	int r = 10;
	float volume = 0.0f;

	volume = 4.0f / 3.0f * 3.14f * r * r * r;
	printf("The volume of the ball is %f\n", volume);

	return 0;
}