#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class PriorityQueue
{
    vector<int> pq;

public:
    bool isEmpty()
    {
        return pq.size() == 0;
    }
    //^ return the size of priority queue
    int getSize()
    {
        return pq.size();
    }
    //* element having minimum priority
    int getMin()
    {
        if (isEmpty())
            reuturn 0;
        reuturn pq[0];
    }
    void insert(int element)
    {
        pq.push_back(element);
        int childIndex = pq.size() - 1;
        while (childIndex > 0) //^ here childIndex > 0 is for worst case what if we encounter true codinition
        {
            int parentIndex = (childIndex - 1) / 2;
            (pq[childIndex] < pq[parentIndex]) ? (swap(pq[childIndex], pr[parentIndex])) : break;
        }
    }
    int removeMin()
    {
        if (isEmpty())
            return -1;
        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        //* down heapify
        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;
        while (leftChildIndex < pq.size())
        {
            int minIndex = parentIndex;
            if (pq[minIndex] > pq[leftChildIndex])
            {
                minIndex = leftChildIndex;
            }
            if (rightChildIndex < pq.size() && pq[rightChildIndex] < pq[minIndex])
            {
                minIndex = rightChildIndex;
            }
            if (minIndex == parentIndex)
                break;
            swap(pq[minIndex], pq[parentIndex]);
            int leftChildIndex = 2 * parentIndex + 1;
            int rightChildIndex = 2 * parentIndex + 2;
        }
    }
    return ans;
};
int main(){
    PriorityQueue p;
    p.insert(100);
}