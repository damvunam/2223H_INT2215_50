#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    int age;
    string first_name;
    string last_name;
    int standard;

    void printClassOne();
    void printClassTwo(){
        cout << age << "," << first_name << "," << last_name << "," << standard;
    }
};

void Student::printClassOne(){
    cout << age << endl << last_name << ", " << first_name << endl << standard << endl << endl;
}

int main(){
    Student obj1;
    cin >> obj1.age >> obj1.first_name >> obj1.last_name >> obj1.standard;
    obj1.printClassOne();
    obj1.printClassTwo();
    return 0;
}
