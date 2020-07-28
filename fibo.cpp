#include<iostream>
using namespace std;
int main()
{	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t=50;
	int a=0,b=1;
	printf("%d,%d,",a,b);
	int temp;
	while(t>0)
	{t--;
	temp=a+b;
	a=b;
	b=temp;
	printf("%d,",temp);
	}
	return 0;
}
