#include <iostream>
using namespace std;

double factorial(int n){
    if(n>0)
        return n * factorial(n-1);
    else
        return 1;
}

int main(){
    int n; cin >> n;
    cout << factorial(n);
}
