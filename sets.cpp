#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int>s;
	s.insert(10);
	s.insert(40);
	s.insert(40);
	s.insert(20);
	s.insert(34);
	s.insert(30);
	s.insert(100);
	s.insert(75);
	set<int>::iterator it=s.begin();
	for(;it!=s.end();it++)
	cout<<*it<<endl;
}
