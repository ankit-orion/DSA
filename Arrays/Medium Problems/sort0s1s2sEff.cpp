/*Sort an array of 0s, 1s and 2s | Dutch National Flag problem
Difficulty Level : Medium
Given an array A[] consisting of only 0s, 1s, and 2s.
The task is to write a function that sorts the given array.
The functions should put all 0s first, then all 1s and all 2s in last.
This problem is also the same as the famous “Dutch National Flag problem”.
The problem was proposed by Edsger Dijkstra. The problem is as follows:
Given N balls of colour red, white or blue arranged in a line in random order.
You have to arrange all the balls such that the balls with the same colours are
adjacent with the order of the balls, with the order of the colours being red, white
and blue (i.e., all red coloured balls come first then the white coloured balls and then
the blue coloured balls)
*/
#include<iostream>
using namespace std;
void printArr(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i]<< " ";
  }
}
void sortArr(int arr[], int n){
  int low = 0, mid = 0, high = n-1;
        while(mid <= high){
        switch (arr[mid]) {
        case 0:
        swap(arr[low++], arr[mid++]);
        break;
        case 1:
        mid++;
        break;
        case 2:
        swap(arr[mid], arr[high--]);
        break;
    }
  }
  printArr(arr, n);
}
int main(){
  int n;
  cin >> n;
  int arr[100];
  for(int i = 0; i < n; i++){
  cin >> arr[i];
  }
  sortArr(arr, n);
  return 0;
}
