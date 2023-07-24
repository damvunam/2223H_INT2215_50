#include <iostream>
using namespace std;

struct Student{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main(){
    Student s1, s2, s3, s4;
    cin >> s1.age >> s2.first_name >> s3.last_name >> s4.standard;
    cout << s1.age << " " << s2.first_name << " " << s3.last_name << " " << s4.standard;
    return 0;
}
