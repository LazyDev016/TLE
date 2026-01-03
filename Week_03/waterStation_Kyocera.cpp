// Problem Link -- https://atcoder.jp/contests/abc305/tasks/abc305_a

/** Approach 01 -- Brute
 *  Take input & check for constraints - If input doesn't pass the constraints return -1;
 *  Now we check (n%5 == 0) simply output n
 *  if not there are 4 possibilities either remainder be 1, 2, 3, 4 we make condition for each one of it and give me the output accordingly
 */
#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     if(n<0 || n>100){
//         return 0;
//     }
//     else{
//         if(n%5==0){
//             cout << n << endl;
//         }
//         else if(n%5 == 1){
//             cout << n-1 << endl;
//         }
//         else if(n%5 == 2){
//             cout << n+3 << endl;
//         }
//         else if(n%5 == 3){
//             cout << n+2 << endl;
//         }
//         else if (n%5 == 4){
//             cout << n+1 << endl;
//         }
//     }
// }


/** Appraoch 02 
 * If the person standing anywhere between 5-10 km lets say at the 7km mark we will then calculate val1 = 7-5km , val2 = 10-7km & val1 + val2 = 5 (Always) so we can calculate the value accordingly
 * so if val1 > val2 we will print n+val2 otherwise n-val1 will be the answer
 */ 

int main(){
    int n;
    cin >> n;

    int val1 = n%5;
    int val2 = 5-(n%5);
    if(val1>val2){
        cout << n+val2 << endl;
    }
    else{
        cout << n-val1 << endl;
    }
}