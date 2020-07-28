#include<stdio.h>
int main()
{
	int a[]={225,44,11,12,3,5,1,445,23};
	for(int j=0;j<9;j++)
	{
		int key=a[j];
		printf("current key %d\n",key);
		int i=j-1;
		while(i>=0 && a[i]>key)
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
	for(int i=0;i<9;i++)
	printf("%d\t",a[i]);
	
}

