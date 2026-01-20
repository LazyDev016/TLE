// https://codeforces.com/problemset/problem/271/A
#include <iostream>
#include <cstring>
using namespace std; 

int main(){
    int y;
    cin >> y;

    for(int i=y+1; ;i++){
        int freq[10]; // Stores the frequency of every digit in the year i

        for(int j=0; j<10;j++){
            freq[j]=0;
        }
        // memset(freq, 0,sizeof(freq));
        
        int year = i;
        while(year>0){
            int digit = year%10;
            freq[digit]++;
            year/=10;
        }
        int flag = 0; // indicates that if any digit occured more than 1 time

        for(int k=0; k<10; k++){
            if(freq[k]>1){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            cout << i << endl;
            break;
        }
    }
}