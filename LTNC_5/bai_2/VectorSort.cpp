#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int>n;
  int number;
  cin >> number;
  for(int i=0;i<number;i++){
    int x; cin >> x;
    n.push_back(x);
  }
  sort(n.begin(),n.end());
  for(int i=0;i<number;i++){
    cout << n[i] << " ";
  }
}
