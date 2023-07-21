#include <iostream>
using namespace std;

void update(int* a, int* b){
  cout <<  *a + *b << endl;
  if(*a>*b){
     cout << *a - *b;
  } else {
    cout << *b - *a;
  }
}

int main(){
    int c,d;
  cin >> c >>d;
  update(&c, &d);

  return 0;
}
