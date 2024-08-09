// #include <iostream>
// #include <map>
// #include <string>

// using namespace std;

// map<string, int> words;

// void addWord(string word) {
//   words[word]++;
// }

// int findPartialWord(string partialWord) {
//   int count = 0;
//   for (auto const &word : words) {
//     if (word.first.find(partialWord) == 0) {
//       count++;
//     }
//   }
//   return count;
// }

// int main() {
//   int p;
//   cin >> p;

//   while (p--) {
//     string operation;
//     cin >> operation;
//     if (operation == "add") {
//       string word;
//       cin >> word;
//       addWord(word);
//     } else if (operation == "find") {
//       string partialWord;
//       cin >> partialWord;
//       cout << findPartialWord(partialWord) << endl;
//     }
//   }

//   return 0;
// }
// #include <iostream>
// using namespace std;
// #define MOD 1000000007
// int n,c;

// int main() {
//     cin>>n>>c;
//     int res = 1;
//     for (int i = 0; i < c; i++) {
//         res = (res * (2 * n - i)) / (i + 1);
//     }
//     cout<<res<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;
#define MOD 1000000007
int n,c;
long long dp[305][305];

int main() {
    cin>>n>>c;
    dp[0][0]=1;
    for(int i=1;i<=c;i++){
        for(int j=0;j<=i&&j<=2*n;j++){
            for(int k=0;k<=j&&k<=n;k++){
                dp[i][j]+=dp[i-1][j-k];
                dp[i][j]%=MOD;
            }
        }
    }
    cout<<dp[c][2*n]<<endl;
    return 0;
}
