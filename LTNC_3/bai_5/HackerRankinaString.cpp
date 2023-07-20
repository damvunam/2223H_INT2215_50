#include <iostream>
#include <string>
using namespace std;

bool checkHackerrank(const string& s) {
    string target = "hackerrank";
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == target[j]) {
            j++;
        }
        if (j == target.length()) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        if (checkHackerrank(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
