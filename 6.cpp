#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d;
    int n;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        int a;
        cin>>a;
        d.push_back(a);
    }
    vector<int>q;
    for(int i =0;i<n;i++)
    {
        int b =d.front();
        int c = d.back();
        if(b>c)
        {
            q.push_back(c);
            d.pop_back();
        }
        else
        {
            q.push_back(b);
            d.pop_front();
        }

    }
    for(int i =0;i<q.size();i++)
    {
        cout<<q[i]<<" ";
    }
    return 0;
}
