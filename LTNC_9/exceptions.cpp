#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int n;

    try
    {
        n = stoi(S);
        cout << n << endl;
    }

    catch (exception e)
    {
        cout << "Bad String";
    }

    return 0;
}
