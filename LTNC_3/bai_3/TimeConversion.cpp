#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string time;
  cin >> time;

  int hour = stoi(time.substr(0, 2));
  string am_pm = time.substr(8, 2);

  if (am_pm == "AM") {
    if (hour == 12) {
      hour = 0;
    }
  } else if (am_pm == "PM") {
    if (hour != 12) {
      hour += 12;
    }
  }

  cout << setfill('0') << setw(2) << hour << time.substr(2, 6);

  return 0;
}
