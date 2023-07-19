#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cin >> number;
    int arr[number];
    double positive = 0;
    double negative = 0;
    double zeros = 0;
    for(int i=0;i<number;i++){
        cin >> arr[i];
    }
    for(int i=0;i<number;i++){
        if(arr[i] < 0){
            negative +=1;
        } else if(arr[i] > 0){
            positive +=1;
        } else {
            zeros +=1;
        }
    }
    // cout << fixed << setprecision(6)
    cout << positive / number << endl << negative /number << endl << zeros /number;
}
