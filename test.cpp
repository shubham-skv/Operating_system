#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m,n;	
	int t;
	int i,j;
	cin>>t;
	while(t>0)
	{
		t--;
		cin>>m>>n;
		for(i=m;i<n;i++)
		{	int flag=0;
				if(i==2 ||i==3||i==5)
				flag=1;
				else if(i==1 ||i%2==0 || i%3==0||i%5==0)
				flag=0;
				else
				{	int	flag1=0;
					for(j=7;j<sqrt(i)+1;j+=2)
					{
						if(i%j==0)
						{
							flag1=-1;
							break;
						}
					}
					if(flag1==0)
					cout<<i<<endl;
				}
			if(flag==1)
			cout<<i<<endl;
			
			
			}
			
		}
		
		
		
	
}
