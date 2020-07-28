#include<stdio.h>
int main()
{int n;
float ini_amt=120;

printf("enter money to withdraw\n");
scanf("%d",&n);
if(n%5!=0)
printf("%5f",ini_amt);
else
{
	int s=0;
	s=ini_amt-n-0.50;
	printf("%d\n",s);
	printf("%f",ini_amt);
	
}}
