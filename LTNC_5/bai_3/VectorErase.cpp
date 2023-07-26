#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,x,a,b,N;
    cin >> n;
    vector<int>v;

    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }

    cin >> N >> a >>b;
    v.erase(v.begin() +N-1);
    if (a >= 0 && b > a && b <= v.size()) {
        v.erase(v.begin() + a-1, v.begin() + b-1);
    }
    cout << v.size() << endl;

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}
