#include<stdio.h>
#include<string.h>
void reverse(char*,int ,int);
int main()
{
	char c[50]="shubham kumar verma";
	printf("Enter any string\n");
	//gets(c);
	
	char d[10];
	d[0]=' ';
	strcat(c,d);
	int l=strlen(c);
	char st[50];int c1=0;
	int i=0;int p=0;
	while(c[i]!='\0')
	{
		if(c[i]==' ')
		{	
		reverse(&c[p],p,i);
		p=i;	
		}
		i++;
		
	}
}
void reverse(char *j,int pos,int end)
{
	char rev[50];int c=0;
	for(int i=pos;i<=end;i++)
	{	rev[c++]=*j;
		j++;
	}
	rev[c]='\0';
	printf("%s",strrev(rev));
	
}

	
