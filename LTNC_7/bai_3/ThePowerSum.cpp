#include <bits/stdc++.h>
using namespace std;

int powerSum(int x, int n, int c){
    if(pow(c,n)<x){
       return powerSum(x,n,c+1) + powerSum(x-pow(c,n), n, c+1);
    } else if(pow(c,n)==x){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int x,n,c=1;
    int result;
    cin >> x >> n;
    result = powerSum(x,n,c);
    cout << result;
    return 0;
}
