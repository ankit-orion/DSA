/*
Find the Majority Element that occurs more than N/2 times
Problem Statement: Given an array of N integers, write a program
to return an element that occurs more than N/2 times in the given array.
You may consider that such an element always exists in the array.*/
#include<bits/stdc++.h>
using namespace std;
int majority(int arr[], int n){
  // checking for the frequency of a number
  // by creating a bool array
  vector<bool> visited(n, false);
  for(int i = 0; i < n;i++){
    if(visited[i] == true)
    continue;
    int count = 1;
    for(int j = i + 1; j < n; j++){
      if(arr[i] == arr[j]){
        visited[j] = true;
        count++;
      }
    }
    // checking whether it satisfies the condition or not
    if(count > n/2){
      return arr[i];
    }
  }
  return -1;
}
int main(){
  int n;
  cin >> n;
  int arr[100];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << majority(arr, n);
}
