#include<stdio.h>
struct round_robin
{
	char ch;
	int at;
	int bt;
	int ct;
	int tat;
	int wt;
	int rm;
	
};
int main()
{
	int i,n;
	printf("Program to Demonstrate Round Robin  CPU Scheduling Algorithm\n");
	printf("Enter no of process \n");
	scanf("%d",&n);
	int TQ=0;
	printf("Enter the Time Quantum\n");
	scanf("%d",&TQ);
	struct round_robin a[n];
	int t=0;
	int c=64,j;
	for(i=0;i<n;i++)
	{	a[i].ch=char(++c);
		a[i].at=0;
		printf("enter burst time for process %c :",a[i].ch);
		scanf("%d",&a[i].bt);
		a[i].rm=a[i].bt;
	}
	int flag;
	float tat=0.0,wt=0.0;
	while(true)
	{	flag=1;
		for(i=0;i<n;i++)
		{	if(a[i].rm>0)
			{	flag=0;
				if(a[i].rm>TQ)
				{
					t+=TQ;
					a[i].rm-=TQ;
				}
				else
				{
					t+=a[i].rm;
					a[i].rm=0;
					a[i].wt=t-a[i].bt;
					a[i].tat=t;
					a[i].ct=t;
					tat+=a[i].tat;
					wt+=a[i].wt;
					
				}
			}
		}
	if(flag==1)
	break;
	}
printf("\nProcess\t\tArrivalTime\tBurstTime\tCompletionTime\tTurnAroundTime\tWaitingTime\n");
for(int i=0;i<n;i++)
printf("%c\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",a[i].ch,a[i].at,a[i].bt,a[i].ct,a[i].tat,a[i].wt);
printf("\nAverage Turn Around Time is %f",tat/n);
printf("\nAverage Waiting Time is %f",wt/n);	
}
	
