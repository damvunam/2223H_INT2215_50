#include <iostream>
#include <string>
using namespace std;

int arr[1001];

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=n-1;i>=0;i--)
        cout << arr[i] << " ";
}
