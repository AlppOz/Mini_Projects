//a simple programme that calculates tax and net salary based on hourly rate and overtime
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double BASIC_HOURS = 35;//hours above this is overtime
    const double OTIME_MULT = 1.5;//the multiplier for overtime hours
    const double TAX_RATE = 0.20;//all pay is taxed at 20%
    const double PRSI_RATE = 0.025;//PRSI is 2.5% of gross pay
    double hours, hourly_rate, tax_credit, gross_pay, overtime, prsi, gross_tax, net_tax, net_pay;

    cout << "Enter hours, hourly rate, tax credit:";
    cin >> hours >> hourly_rate >> tax_credit;

    if (hours > BASIC_HOURS) {    //if overtime
        overtime = hours - BASIC_HOURS;
        gross_pay = (BASIC_HOURS * hourly_rate) + (overtime * OTIME_MULT * hourly_rate);
    }
    else {    //if no overtime
      gross_pay = (hours * hourly_rate);
    }

    prsi = PRSI_RATE * gross_pay;
    gross_tax = gross_pay * TAX_RATE;

    if (tax_credit >= gross_tax) {	//can't have negative tax
      net_tax = 0;
    }
    else { 	//usual tax calculation
      net_tax = gross_tax - tax_credit;
    }

    net_pay = gross_pay - net_tax - prsi;

    cout << "Gross:" << gross_pay << " Tax:" << net_tax << " PRSI:" << prsi;
    cout << " Net:" << net_pay << endl;

    return 0;
}