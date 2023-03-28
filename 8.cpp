#include<bits/stdc++.h>
using namespace std;
class MaxHeap
{
public:
    vector<int>node;

    MaxHeap()
    {

    }
    void upheapify(int idx)
    {
        while(idx>0&&node[idx]>node[(idx-1)/2])
        {
            swap(node[idx],node[(idx-1)/2]);
            idx=(idx-1)/2;
        }
    }
    void Insert(int x)
    {
        node.push_back(-x);
        upheapify(node.size()-1);
    }
    void downheapify(int idx)
    {
        while(true)
        {
            int largest = idx;
            int l = 2*idx +1;
            int r = 2*idx +2;
            if(l<node.size() && node[l]>node[largest])
                largest = l;
            if(r<node.size() && node[r]>node[largest])
                largest = r;
            if(largest == idx)
                break;
            swap(node[idx],node[largest]);
            idx = largest;
        }
    }
    void Delete(int idx)
    {
        if(idx>=node.size())
            return;
        swap(node[idx],node[node.size()-1]);
        node.pop_back();
        downheapify(idx);
    }
    int getMax()
    {
        if(node.size()==0)
            return -1;
        return -node[0];
    }
    int ExtractMax()
    {
        if(node.size()==0)
            return -1;
        int m = node[0];
        Delete(0);
        return m;
    }
    void PrintHeap()
    {
        for(int i =0; i<node.size(); i++)
            cout<<node[i]<<" ";
        cout<<"\n";
    }

};
class MinHeap{
public:
    MaxHeap mx;
    void Insert(int x)
    {
        mx.Insert(x);

    }
    void Delete(int idx)
    {
        mx.Delete(idx);
    }
    int getMin()
    {
        return mx.getMax();
    }
};

int main()
{
    MinHeap mh;
    mh.Insert(10);
    mh.Insert(9);
    mh.Insert(15);
    mh.Insert(8);
    mh.Insert(5);
    mh.Insert(8);
    mh.Insert(5);
    mh.Insert(2);
    mh.Insert(3);
    cout<<mh.getMin()<<"\n";
}
