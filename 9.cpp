#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>mp1;
    for(int i =1;i<=n;i++)
    {
        string T;
        cin>>T;
        if(mp1[T]==0)
        {
            cout<<-1<<"\n";
            mp1[T] = i;
            continue;
        }
        cout<<--mp1[T]<<"\n";
        mp1[T]=i;

    }

    return 0;
}

