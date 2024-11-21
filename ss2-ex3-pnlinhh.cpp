#include <stdio.h>
int main ()
{
	float r,c;
	#define PI 3.14;
	printf("Nhap ban kinh r:");
	scanf("%f",&r);
	c = r*2*PI;
	printf("Nhap Chu vi hinh tron la :");
	scanf("%f",&c);
	printf("Chu vi hinh tron la %f,c");
	return 0;
}
