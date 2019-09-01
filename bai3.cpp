#include <stdio.h>
int main()
{
	unsigned int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	for(c = 1 ; c <= b ; c = c + 1)
		{
		a=a+a*8/100;
		}
	printf("tong so tien co la %d", a );

 	return 0;
}