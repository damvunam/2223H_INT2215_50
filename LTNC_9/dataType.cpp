#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  int n;
  float m;
  cin >> n >> m;
  string s;
  cin.ignore();
  getline(cin,s);

  cout << n+4 << endl <<fixed << setprecision(1) << m+4 <<endl<< "HackerRank " << s;
    return 0;
}
