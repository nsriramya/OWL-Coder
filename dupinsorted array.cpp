#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    stack<int>s;
    int n;
    cin>>n;
    int a[n];
;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
        s.push(a[0]);
    v.push_back(a[0]);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=s.top())
        {
            s.push(a[i]);
            v.push_back(a[i]);
            // break;
        }
    }
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
