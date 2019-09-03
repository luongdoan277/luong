#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if ( (a<b+c) && (b<a+c) && (c<a+b) )
		{
			d=a+b+c;
			e=sqrt((d/2)*(d-a)*(d-b)*(d-c));
			printf("chu vi tam giac la %d\n", d);
			printf("dien tich tam giac la %d\n", e);		
		}
	return 0;
}
