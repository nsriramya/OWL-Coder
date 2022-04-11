#include<bits/stdc++.h>
using namespace std;
void psub(int ind,int n,vector<int>&ds,int a[])
{
	if(ind==n)
	{
		for(auto it:ds)
		{
		cout<<it<<" ";
	    }
	    cout<<"\n";
	    return ;
    }
	ds.push_back(a[ind]);
	psub(ind+1,n,ds,a);
	ds.pop_back();
	psub(ind+1,n,ds,a);
}
int main()
{
	 int n;
	 cin>>n;
	 int a[n];
	 vector<int>ds;
	 for(int i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 }
psub(0,n,ds,a);
}
