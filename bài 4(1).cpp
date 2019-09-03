#include <stdio.h>
int main()
{
	float a,b,c;
	scanf("%f",&a);
	scanf("%f",&b);
	for(c = 1 ; c <= b ; c = c + 1)
		{
		a=a+a*8/100;
		}
	printf("tong so tien co la %f", a );

	return 0;
}
