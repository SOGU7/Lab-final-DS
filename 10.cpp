#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i =0; i<n; i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    int n1;
    cin>>n1;
    for(int i =0; i<n1; i++)
    {
        int b;
        cin>>b;
        s.insert(b);
    }
    for(auto i:s)
        cout<<i<<" ";
    return 0;
}
