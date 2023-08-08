#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    for(int i=1;i<=10;i++){
        int result = number*i;
        cout << number << " x " << i  << " = "<< result << endl;
    }
}
