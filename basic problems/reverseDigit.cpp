#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int rev = 0;
    while(n >0){
        int t = n%10;
        rev = rev*10 + t;
        n = n/10;
    }
    cout << rev;
    return 0;    
}
// java implementation
// import java.util.Scanner;

// public class Main {

// 	public static void main(String[] args) {
// 		// Write your code here
// 		Scanner s = new Scanner(System.in);
// 		int n = s.nextInt();
// 		int rev =0;
// 		while(n>0){
// 			int t = n%10;
// 			rev = rev*10+t;
// 			n=n/10;
// 		}
// 		System.out.println(rev);

// 	}
// }