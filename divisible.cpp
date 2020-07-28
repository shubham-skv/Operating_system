#include<iostream>
using namespace std;
int main()
{
	int a,b,k,i;
	int t,check;
	cin>>t;
	cin>>a>>b>>k;
	//a=2,b=3,k=10;
	int count=0;
	if(a>=b)
	check=a*k;
	else
	check=b*k;
	int ii;
	if(a<=b)
	ii=a;
	else
	ii=b;
	/*
	cout<<"count is"<<count<<endl;
	cout<<"a is"<<a<<endl;
	cout<<"b is"<<b<<endl;
	cout<<"k is"<<k<<endl;
	cout<<"check is"<<check<<endl;
	cout<<"ii is"<<ii<<endl;
	*/
	for(i=ii;i<=check;i++)
	{	//cout<<"i is "<<i<<endl;
		if(i%a==0||i%b==0)
		{	//cout<<i<<"count is"<<count<<endl;
			count++;
		}
		if(count==k)
		{
			cout<<i;
			break;
		}
	}
	
}
