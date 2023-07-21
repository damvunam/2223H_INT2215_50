#include <iostream>
using namespace std;

int main(){
    int n, m, p, q;
    cin >> n >> m;
    int a[100], b[100];
    int count = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        // a = a[n-1];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
        // b = b[0];
    }
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=a[n-1];k<b[0];k++){
                if(k%a[i]==0 && b[i]%k==0){
                  count++;
                }
            }
        }
    }
  cout << count;
  return 0;
}
