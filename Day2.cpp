#include <bits/stdc++.h>
using namespace std;
// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tipAmount = (tip_percent*meal_cost)/100;
    double taxAmount = (tax_percent*meal_cost)/100;
    double total = tipAmount + taxAmount + meal_cost;
    double deci = total - (int)total;
    //cout << "DECI : " << deci << endl;
    if (deci > .5){
        cout << "The total meal cost is " << (int)total + 1 << " dollars." << endl;
    }
    else {
        cout << "The total meal cost is " << (int)total << " dollars." << endl;
    }
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
