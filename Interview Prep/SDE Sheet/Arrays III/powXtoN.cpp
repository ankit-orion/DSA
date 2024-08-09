#include <iostream>
using namespace std;
// int main(){
//     int x;
//     int n;
//     cin >> x >> n;
//     double ans = 1.0;
//     for(int i = 0; i < n; i++){
//         ans *= x;
//     }
//     cout << ans;
//     return 0;
// }

// int main(){
//     int n;
//     int x;
//     cin >> x >> n;
//     int ans = 1;
//     long long nn = n;
//     while(nn > 0){
//         if(nn % 2){

//             ans = ans*x;
//             nn = nn - 1;
//         }
//         else{
//             x = x * x;
//             nn = nn / 2;
//         }
//     }
//     cout << ans;
// }

class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1.0;
        long long nn = n;
        if (nn < 0)
            nn = -1 * nn;
        while (nn)
        {
            if (nn % 2)
            {
                ans = ans * x;
                nn = nn - 1;
            }
            else
            {
                x = x * x;
                nn = nn / 2;
            }
        }
        if (n < 0)
            ans = (double)(1.0) / (double)(ans);
        return ans;
    }
};