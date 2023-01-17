#include<iostream>
using namespace std;
int main(){
  int res = 5;
  int l = 5, j = 10;
  cout << res << " res before increment" << endl;
  while(l < j){
    res += 1;
    l++;
    j--;
  }
  cout << res <<" res after addition outside scope"<< endl;
}
