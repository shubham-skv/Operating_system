#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[10]={1,10,4,2,8,7,0,4,3,2};
	int i;
	sort(a,a+10);
	for(i=0;i<10;i++)
	if(binary_search(a,a+10,i))
	cout<<i<<" is present in the array\n";
	return 0;
}

