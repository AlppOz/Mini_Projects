//a simple programme that produces a tax receipt from hourly salary
/**
* Format
* Name         Michael McConnell
* Hours                    35.00
* Hourly rate              15.00
* Gross wage              525.00
* Tax @ 20%               105.00
* PRSI @ 2.5%              13.12
* ------------------------------
* Net pay                 406.88
*
*/

#include <algorithm>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int blank_space(double value);

int main()
{
    const double BASIC_HOURS = 35;//hours above this is overtime
    const double OTIME_MULT = 1.5;//the multiplier for overtime hours
    const double TAX_RATE = 0.20;//all pay is taxed at 20%
    const double PRSI_RATE = 0.025;//PRSI is 2.5% of gross pay
    double hours, hourly_rate, tax_credit, gross_pay, overtime, prsi, gross_tax, net_tax, net_pay;
    string name;

    cout << "Enter hours, hourly rate, tax credit, name:";
    cin >> hours >> hourly_rate >> tax_credit;
    getline(cin, name);

    auto name_space = [] (string name) {
        const int print_spacing = 30;
        string str = name;
        int name_lenght = str.length();
        return print_spacing - name_lenght;
    };

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

    cout << setprecision(2) << fixed << showpoint <<  endl;
    cout << left << setw(name_space(name)) << "Name" << right << name << endl;
    cout << left << setw(blank_space(hours)) << "Hours" << right <<  hours << endl;
    cout << left << setw(blank_space(hourly_rate)) << "Hourly rate" << right <<  hourly_rate << endl;
    cout << left << setw(blank_space(gross_pay)) << "Gross wage" << right <<  gross_pay << endl;
    cout << left << setw(blank_space(net_tax)) << "Tax @ 20%" << right <<  net_tax << endl;
    cout << left << setw(blank_space(prsi)) << "PRSI @ 2.5%" << right <<  prsi << endl;
    cout << "------------------------------" << endl;
    cout << left << setw(blank_space(net_pay)) << "Net pay" << right <<  net_pay << endl;


    return 0;
}

int blank_space(double value) {
    const int print_spacing = 30;
    int valueint = value;
    string valuestr = to_string(valueint);
    int value_lenght = valuestr.length() + 3;
    return print_spacing - value_lenght;
}