#include<iostream>
using namespace std;
int main(){
    string s;
    // why taking string - because we have to excess each and every digits 
    // also we don't have to change every digit 
    // we can also do this using int but it is lengthy process
    cin >> s;
    int n;
    int len = s.size();

    // first digit 
    int f = s[0] - '0'; // this will extract the number from ascii value as we have stored the digits in string so we need to subtract char '0' from it
    if(f == 9){
        s[0] = '9';
    }else{
        if(f>4){
            s[0] = (9-f)+'0'; // why adding zero because we are converting number into string from integer as we have extracted digit in int
        }
    }
    for (int i = 1; i < len; i++)
    {
        /* code */
        int a = s[i] - '0';
        if(a < 5 || a == 0){
            continue;
        }else
        {
            s[i] = ((9-a) + '0');
        }
        
    }
    cout << s << endl;
}