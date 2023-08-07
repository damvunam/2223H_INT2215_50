#include <bits/stdc++.h>
using namespace std;

void totalCost(double meal_cost, int tip_percent, int tax_percent){
    double tip = (meal_cost*1.0 / 100) * tip_percent;
    double tax = (tax_percent*1.0 / 100) * meal_cost;
    int total = (int) round(meal_cost + tip + tax);
    cout << total;
}

int main(){
    int meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    totalCost(meal_cost, tip_percent, tax_percent);
}
