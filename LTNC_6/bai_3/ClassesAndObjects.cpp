#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
    int scores[5];
    public:
    int sum = 0;
    void input(){
        for(int i=0;i<5;i++){
            cin >> scores[i];
            sum += scores[i];
        }
    }

    int calculateTotalScore(){
        return sum;
    }

};

int main(){
    int n;
    cin >> n;

    Student *s = new Student[n]; // su dung bo nho dong tao ra mot mang n sinh vien

    for(int i=0;i<n;i++){
        s[i].input();
    }

    int Kristen_score = s[0].calculateTotalScore();
    int count = 0;
    for(int i=1;i<n;i++){
        if(s[i].calculateTotalScore()>Kristen_score){
            count++;
        }
    }

    cout << count;

}
