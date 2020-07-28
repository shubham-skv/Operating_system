#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	
	int a[10]={1,10,4,2,8,7,0,4,3,2};
	int i;
	sort(a,a+6);
	for(i=0;i<10;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}













