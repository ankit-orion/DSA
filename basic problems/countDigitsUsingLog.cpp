#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = (int)log10(n) + 1;  //typecasting using (int )
    cout << cnt;
}