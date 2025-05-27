#include <iostream>

using namespace std; // lets us omit "std::" when using cout.

int main(){
    /*
        Given an income of 95k, what is total tax if state tax is 4% and federal is 2%
    */
    const double state_tax_portion = .04;
    const double federal_tax_portion = .02;

    int income = 95000;
    double state_tax = income * state_tax_portion;
    double federal_tax = income * federal_tax_portion;
    double total = state_tax + federal_tax;

    cout << "Pre-tax Income: " << income << endl
         << "Tax: " << total  << endl
         << "Taxed income: " << income - total  << endl;

    return 0;
}
