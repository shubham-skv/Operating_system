#include<stdio.h>
void fun(int *p,int *q)
{
	p=q;
	*p=2;
}
int i=0,j=1;
int main()
{
	fun(&i,&j);
	printf("%d %d",i,j);
	return 0;
}
	
	
