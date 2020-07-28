//PROGRAM FOR PRIORITY SCHEDULING
#include<stdio.h>
struct prio_sch
{	char ch;//Process name
	int at;//Arrival Time
	int bt;//Burst Time
	int ct;//Completion Time
	int tat;//Turn Around Time
	int wt;//Waiting Time
	int priority;//Priority
	
};
int main()
{	int n;
	printf("Program to Demonstrate Priority Scheduling  Algorithm\n");
	printf("Enter number of process \n");
	scanf("%d",&n);
	printf("\n");
	struct prio_sch a[n],temp;
	int c=64;
	for(int i=0;i<n;i++)
	{	a[i].ch=char(++c);
		a[i].at=0;
		printf("enter burst time for process %c :",a[i].ch);
		scanf("%d",&a[i].bt);
		printf("enter priority for process %c :",a[i].ch);
		scanf("%d",&a[i].priority);
	}
	for(int i=0;i<n;i++)
	for(int j=0;j<n-1;j++)
	{
		if(a[j].priority<a[j+1].priority)
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}	
	int current_time=0;
	float avg_tat=0.0;
	float avg_wt=0.0;
	for(int i=0;i<n;i++)
	{
		a[i].ct=current_time +a[i].bt;
		current_time=a[i].ct;
		a[i].tat=a[i].ct - a[i].at;
		a[i].wt=a[i].tat - a[i].bt;
		avg_tat+=a[i].tat;
		avg_wt+=a[i].wt;
	}	
	printf("\nProcess\t\tArrivalTime\tBurstTime\tCompletionTime\tTurnAroundTime\tWaitingTime\n");
	for(int i=0;i<n;i++)
	{
		printf("%c\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",a[i].ch,a[i].at,a[i].bt,a[i].ct,a[i].tat,a[i].wt);
	}
	printf("\nAverage Turn Around Time is %f",avg_tat/n);
	printf("\nAverage Waiting Time is %f",avg_wt/n);	
}
