#include <iostream>
using namespace std;

//mảng đánh dấu
int f[100001];
int a[5005], b[5005];

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        f[a[i]] = 1;
    }
    int res = 0;
    for(int j=0;j<=n;j++){
        cin >> b[j];
        if(f[b[j]]==0) res = b[j];
    }
    cout << res;
}
