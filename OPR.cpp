#include<stdio.h>
int main()
{
int n,pg[30],fr[10];
int count[10],i,j,k,f,flag,temp,current,c,dist,max,m,cnt,p,x;
float fault=0.0;
dist=0;
k=0;
printf("\tProgram to implement Optimal Page Replacement\n");
printf("\tEnter the total no pages: ");
scanf("%d",&n);
printf("\tEnter the sequence:");
for(i=0;i<n;i++)
scanf("%d",&pg[i]);
printf("\n\tEnter frame size:");
scanf("%d",&f);

for(i=0;i<f;i++)
{
count[i]=0;
fr[i]=-1;
}
for(i=0;i<n;i++)
{
flag=0;
temp=pg[i];
for(j=0;j<f;j++)
{
if(temp==fr[j])
{
flag=1;
break;
}
}
if((flag==0)&&(k<f))
{
fault++;
fr[k]=temp;
k++;
}
else if((flag==0)&&(k==f))
{
fault++;
for(cnt=0;cnt<f;cnt++)
{
current=fr[cnt];
for(c=i;c<n;c++)
{
if(current!=pg[c])
count[cnt]++;
else
break;
}
}
max=0;
for(m=0;m<f;m++)
{
if(count[m]>max)
{
max=count[m];
p=m;
}
}
fr[p]=temp;
}
printf("\n\tpage  %d  frame\t",pg[i]);
for(x=0;x<f;x++)
{
printf("%d\t",fr[x]);
}
}
printf("\n");
printf("\n\tNumber of Hits :%d",int(n-fault));
printf("\n\tNumber of Hits :%d",int(fault));

printf("\n\tHit  Ratio Percent :%f",(n-fault)*100/n);
printf("\n\tMiss Ratio Percent :%f",(fault)*100/n);

return 0;
}
