#include<stdio.h>
int search(int b[],int num,int n)
{	
	for(int i=0;i<n;i++)
	{
		if(b[i]==num)
		return true;	
	}
	return false;	
}
int main()
{	printf("\tFirst In First Out Page Replacement Algorithm \n");
	
	int n=12,i,j;
	printf("\tEnter number of pages: ");
	scanf("%d",&n);
	int a[n],m;
	printf("\tEnter  Reference string : ");

	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\tEnter number of frames : ");
	scanf("%d",&m);
	int b[m];

	for(i=0;i<m;i++)
	b[i]=-1;
	float hit=0.0,miss=0.0;
	int m1=0;
	for(i=0;i<n;i++)
	{
		int c=a[i];
		if(search(b,c,m))
		{	b[m1%m]=c;
			hit++;
		}
		else
		{	b[(m1++)%m]=c;
			miss++;
		}
		
	}
	printf("\tNumber of Hit %d Number of Miss %d\n",int(hit),int(miss));
	printf("\tHit Ratio Percent %f Miss Ratio Percent %f ",(hit*100)/n,(miss*100)/n);
	
}
