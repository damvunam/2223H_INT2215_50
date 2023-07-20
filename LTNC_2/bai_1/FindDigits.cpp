#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  for(int i=0;i<t;i++){
    int n; cin >> n;
    int temp = n,x,count =0;
    while(temp){
      x = temp % 10;
      temp = temp / 10;
      if(x!=0 && (n%x==0)){
        count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}
