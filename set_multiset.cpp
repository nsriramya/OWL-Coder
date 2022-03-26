#include<bits/stdc++.h>
using namespace std;
int main()
{
	 set<int>s;
	s.insert(6);
	s.insert(3);
	s.insert(2);
	s.emplace(7);
	auto it=s.find(3);
	cout<<* (it)<<" "
	;
	s.erase(6);
	for(auto iit:s)
	{
		cout<<(iit)<<" ";
	}
	cout<<"\n";
	multiset<int>ms;
	ms.insert(1);
		ms.insert(8);
			ms.insert(3);
				ms.insert(2);
				ms.erase(8);
for(auto iit:ms)
	{
		cout<<(iit)<<" ";
	}
	

}