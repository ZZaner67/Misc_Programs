/* Zane Brown
   Dr. Halverson
   4/22/2020
   Le Markup
   The program takes the wholesale price of an item
   along with its markup percantage in order to caluclate
   the retail price of said item.*/
#include <iostream>
#include <iomanip>
using namespace std;
double calculateRetail(double fcst2, double fmrk2);

int main()
{
    double fcst, fmrk, ffcst;
    cout << "Please enter the item's cost: ";
    cin >> fcst;
    // Here is where the user enters the wholesale cost
    // and the markup percantage.
    cout << "Now please enter the markup percentage: ";
    cin >> fmrk;
    ffcst = calculateRetail(fcst, fmrk);
    cout << fixed << setprecision(2) << "The wholesale cost is: $ " << fcst << '\n';
    cout << "The markup percentage is: % " << fmrk << '\n';
    cout << fixed << setprecision(2) << "The retail cost will be: $ " << ffcst << '\n';
}
double calculateRetail(double fcst2, double fmrk2)
{ // this function calculates the retail price
    double prcnt, mrkp;
    prcnt = fmrk2 / 100;
    mrkp = fcst2 * prcnt;
    return fcst2 + mrkp;
}