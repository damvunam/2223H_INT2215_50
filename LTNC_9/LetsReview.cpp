#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        for(int j=0;j<s.size();j++){
            if(j%2==0)
                cout << s[j];
        }
        cout << " ";
        for(int j=0;j<s.size();j++){
            if(j%2!=0)
                cout << s[j];
        }
        cout << endl;
    }
}
