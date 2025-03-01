//Programme to determine how many months it takes to pay off a loan.
/* Sample:: Loan amount:1500
      Monthly payment:50
      36 months.
      292.31 euro total interest.
      42.31 euro final payment.     */
#include <iostream>
#include <iomanip> //for fixed and setprecision
using namespace std;

int main() {
    const double ANNUAL_RATE = 0.12;
    double loan_amount, monthly_payment, total_interest;
    double monthly_rate = (ANNUAL_RATE/12.0);
    int no_month;

    cout << "Loan amount:";
    cin >> loan_amount;
    cout << "Monthly payment:";
    cin >> monthly_payment;

    no_month = 0;
    total_interest = 0;
    while (loan_amount >= 0) {
        total_interest = total_interest + (loan_amount * monthly_rate);
        loan_amount = loan_amount * (1 + monthly_rate);
        loan_amount = loan_amount - monthly_payment;
        no_month = no_month + 1;
    }
    monthly_payment = monthly_payment + loan_amount;

    cout << fixed << setprecision (2);
    cout << no_month << " months.\n";
    cout << total_interest << " euro total interest.\n";
    cout << monthly_payment <<  " euro final payment.\n";

    return 0;
}