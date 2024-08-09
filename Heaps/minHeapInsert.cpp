#include <iostream>
#include <vector>
using namespace std;

class minHeap
{
    vector<int> vec;
public:
    void insert(int val)
    {
        vec.push_back(val);
        int root = vec.size() - 1;
        while (root > 0)
        {
            int parent = (root - 1) / 2;
            if (vec[parent] > vec[root])
            {
                swap(vec[parent], vec[root]);
            }
            else
            {
                break;
            }
        }
    }
    void print(){
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
    }
    void minHeapify(int i){
        int lt = 2*i + 1;
        int rt = 2*i + 2;
        int smallest = i;
        if(lt < vec.size() && rt < vec.size()){
        smallest = min(smallest,min(lt, rt));
        }
        if(smallest != i){
            swap(vec[i], vec[smallest]);
            minHeapify(smallest);
        }
    }
};
int main()
{
    minHeap heap;
    heap.insert(35);
    heap.insert(10);
    heap.insert(20);
    heap.insert(30);
    heap.insert(40);
    heap.print();
    return 0;
}