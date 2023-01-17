#include <iostream>
using namespace std;
void insert(int arr[], int n, int value)
{
    if (value > n)
    {
        arr[value] + 1;
    }
}
bool search(int arr[], int n, int value)
{
    if (arr[value] >= 1)
    {
        return true;
    }
    return false;
}
void remove(int arr[], int n, int value)
{
    if (arr[value] >= 1)
    {
        arr[value] - 1;
    }
    else
        return;
}
int main()
{
    int arr[1000] = {0};
    int n = 1000;
    insert(arr, n, 10);
    insert(arr, n, 10);
    insert(arr, n, 20);
    insert(arr, n, 45);
    insert(arr, n, 65);
    insert(arr, n, 89);
    insert(arr, n, 200);
    for(int i = 0; i < 210; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    cout << search(arr, n, 20)<< endl;
    cout << search(arr, n, 39)<< endl;
    cout << search(arr, n, 65)<< endl;
    remove(arr, n, 75);
    remove(arr, n, 10);
    remove(arr, n, 10);
}