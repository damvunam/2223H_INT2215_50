#include <iostream>
using namespace std;

const string s = "abcd";
string t = "";

void backTrack(int i){
    for(int j=0;j<4;j++){
        t += s[j];
        if(i==3){
            cout << t << endl;
        } else {
            backTrack(i+1);
        }
        t.pop_back();
    }
}

int main(){
    backTrack(1);
}
