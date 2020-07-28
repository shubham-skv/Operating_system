#include<stdio.h>
void merge(int *a,int p,int mid,int q)
{
	int n1=mid-p+1;
	int n2=q-mid;
	int l[n1+1],r[n2+1];
//	printf(" \nlist L\n");
	for(int i=0;i<n1;i++)
	{
			l[i]=a[p+i];
		//	printf("%d\t",l[i]);
	}
//printf(" \nlist R\n");
	for(int j=0;j<n2;j++)
	{r[j]=a[mid+j];
			//	printf("%d\t",r[j]);

		
	}
	
	l[n1+1]=4654;
	r[n2+1]=6545;
	int i=0,j=0;
	for(int k=p;k<q;k++)
	if(l[i]>r[j])
	a[k]=r[j++];
	else
	a[k]=l[i++];	
}
void mergesort(int *a,int p,int q)
{
	if(p<q)
	{
		int mid=int((p+q)/2);
		//printf("%d ",mid);
		mergesort(a,p,mid);
		mergesort(a,mid+1,q);
		merge(a,p,mid+1,q);
	}
}
int main()
{
	int a[]={225,44,31,45};
	for(int i=0;i<4;i++)
	printf("%d\t",a[i]);
	printf("\n");
	mergesort(a,0,4);
		printf("\n");
	for(int i=0;i<4;i++)
	printf("%d\t",a[i]);
	return 0;
}
	
