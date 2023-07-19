#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    for (int j=0;j<t;j++){

  int n;
  cin >> n;
  int arr[100];
  int sum = 0;
  int sumRight = 0;
  int sumLeft = 0;
  for(int i=0;i<n;i++){
    cin >> arr[i];
    sum += arr[i];
  }
  bool flag = true;
  for(int i=0;i<n-1;i++){
    sumLeft += arr[i];
    sumRight = sum - sumLeft - arr[i+1];
    if(sumLeft==sumRight){
      cout << "YES\n";
       flag = false;
    }
  }
  if(flag == true)
      cout << "NO\n";
    }
}
