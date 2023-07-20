#include <iostream>
using namespace std;

int main() {
  int n,p;
  cin >> n >> p;
  int count = 0;
  for(int i=1;i<=p;i+=2){
    count++;
  }
  if(p>n/2){
    cout << count-2;
  } else if(p<n/2){
    cout << count;
  } else {
    cout << count -1;
  }

}
