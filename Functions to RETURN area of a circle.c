//area of a circle
#include<stdio.h>

float area(float r);

float input,answer;

int main(void)
{
	printf("enter an integer value");
	scanf("%f",&input);
	answer=area(input);
	printf("area of a circle is %f and %f",input,answer);

	return 0;
}
float area(float r)
{
	float area;
	float pie=3.142;
	area=pie*r*r;
	return area;
	
	}
