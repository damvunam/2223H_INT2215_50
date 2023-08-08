#include <bits/stdc++.h>
using namespace std;

class person{
    public:
        int x;
        person(int n);
        void age();
        void yearPasses();
};

person::person(int n){
    if(n > 0){
        x = n;
    } else {
        cout << "Age is not valid, setting age to 0.\n";
        x = 0;
    }
}

void person::age(){
    if(x < 13){
        cout << "You are young.\n";
    } else if(x >= 13 && x < 18){
        cout << "You are a teenager.\n";
    } else {
        cout << "You are old.\n";
    }
}

void person::yearPasses(){
    x++;
}

int main(){
    int n,x; cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        person p(x);
        p.age();
        for(int j = 0; j < 3;j++){
            p.yearPasses();
        }
        p.age();
        cout << endl;
    }
}
