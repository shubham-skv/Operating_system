
//PROGRAM FOR FIRST IN FIRST OUT ALGORITHM
#include<stdio.h>
struct fcfs
{	char c;//Process name
	int at;//Arrival Time
	int bt;//Burst Time
	int ct;//Completion Time
	int tat;//Turn Around Time
	int wt;//Waiting Time
	
};
int main()
{	int n;
	printf("Program to Demonstrate First Come First Serve CPU Scheduling Algorithm\n");
	printf("Enter number of process \n");
	scanf("%d",&n);
	printf("\n");
	struct fcfs a[n],temp;

	int c1=64;
	for(int i=0;i<n;i++)
	{	a[i].c=char(++c1);
		printf("enter arrival time for process %c :",a[i].c);
		scanf("%d",&a[i].at);
		printf("enter burst time for process %c :",a[i].c);
		scanf("%d",&a[i].bt);
	}
	


	for(int i=0;i<n;i++)
	for(int j=0;j<n-1;j++)
	{
		if(a[j].at>a[j+1].at)
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}	
	//Calculating Completion Time
		
	int current_time=a[0].at;
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
printf("%c\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",a[i].c,a[i].at,a[i].bt,a[i].ct,a[i].tat,a[i].wt);
printf("\nAverage Turn Around Time is %f",avg_tat/n);
printf("\nAverage Waiting Time is %f",avg_wt/n);	
}
