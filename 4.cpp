#include<bits/stdc++.h>
using namespace std;
int main()
{
    string T;
    cin>>T;
    stack<char>s;
    for(int i=0;i<T.size();i++)
    {
        char ch = T[i];
        if(ch=='('||ch=='{'||ch=='[')
            s.push(ch);
        else
        {
            if(s.empty())
            {
                cout<<"No\n";
                return 0;
            }
            if(ch==')'&&s.top()=='(')
                s.pop();
            else if(ch=='}'&&s.top()=='{')
                s.pop();
            else if(ch==']'&&s.top()=='[')
                s.pop();
            else
            {
                cout<<"No\n";
                return 0;
            }
        }
    }
    if(s.empty())
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}

