#include<stdio.h>
struct sjf
{
	char ch;
	int at;
	int bt;
	int ct;
	int tat;
	int wt;
	
};
int main()
{
	int i,n;
	printf("Program to Demonstrate Shortest Job First(Non Preemptive)\n");
	printf("Enter no of process \n");
	scanf("%d",&n);
	struct sjf a[n],temp;
	int c=64,j;
	for(i=0;i<n;i++)
	{	a[i].ch=char(++c);
		a[i].at=0;
		printf("enter burst time for process %c :",a[i].ch);
		scanf("%d",&a[i].bt);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j].bt>a[j+1].bt)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int current_time=0;
	float tat=0,wt=0;
	for(int i=0;i<n;i++)
	{	
		a[i].tat=current_time+a[i].bt;
		a[i].wt=current_time;
		tat+=a[i].tat;
		wt+=a[i].wt;
		current_time=a[i].tat;
		a[i].ct=a[i].tat;	
	}
	printf("\nProcess\t\tArrivalTime\tBurstTime\tCompletionTime\tTurnAroundTime\tWaitingTime\n");
	for(int i=0;i<n;i++)
	{
		printf("%c\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",a[i].ch,a[i].at,a[i].bt,a[i].ct,a[i].tat,a[i].wt);
	}
	printf("\nAverage Turn Around Time is %f",tat/n);
	printf("\nAverage Waiting Time is %f",wt/n);	
}
