/* Zane Brown
   Dr. Halverson
   4/23/2020
   Le Mercy Hospital
   This program takes a set of billing information 
   and calculates the bills and charges for hospital patients
   while also checking their ID's for errors.*/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
double InPatientBill(double days1, double dlrt1, double hsptlsrv1, double mdctchg1);
double OutPatientBill(double hsptlsrv2, double mdctchg2);
int main()
{
    ifstream infile;
    ofstream outfile;
    infile.open("input.txt");
    outfile.open("output.txt");
    outfile << "Student Name: Zane Brown\n" << '\n';
    outfile << "************************************************\n";
    int idnt, dshptl;
    char ptype;
    double dlrt, hsptlsrv, mdctchg, fnlchrg;
    while (infile >> idnt >> ptype)
    {
        dshptl = 0, dlrt = 0, hsptlsrv = 0, mdctchg = 0;
        outfile << fixed << setprecision(2);
        if (idnt < 60000 && ptype == 'I' || ptype == 'i')
        { // Here is where the In patient data is checked and then calculated in a function.
            infile >> dshptl >> dlrt >> hsptlsrv >> mdctchg;
            fnlchrg = InPatientBill(dshptl, dlrt, hsptlsrv, mdctchg);
            outfile << "Patient ID:        " << idnt << '\n';
            outfile << "Type:              In-Patient\n";
            outfile << "Total Due:         $" << setw(10) << fnlchrg << '\n';
            outfile << '\n';
            outfile << setw(6) << dshptl << " Days @      $" << setw(10) << dlrt << '\n';
            outfile << "     Other         $" << setw(10) << hsptlsrv << '\n';
            outfile << "     Medicines     $" << setw(10) << mdctchg << '\n';
        }
        else if(idnt > 60000 && ptype == 'O' || ptype == 'o')
        { // Here is where the out patient data is checked, calculated in a function.
            infile >> hsptlsrv >> mdctchg;
            fnlchrg = OutPatientBill(hsptlsrv, mdctchg);
            outfile << "Patient ID:        " << idnt << '\n';
            outfile << "Type:              Out-Patient\n";
            outfile << "Total Due:         $" << setw(10) << fnlchrg << '\n';
            outfile << '\n';
            outfile << "      Charges      $" << setw(10) << hsptlsrv << '\n';
            outfile << "      Medicines    $" << setw(10) << mdctchg << '\n';
            outfile << "      Processing   $     10.00\n";
        }
        else if(idnt > 60000 && ptype == 'I' || ptype == 'i')
        {
            infile >> dshptl >> dlrt >> hsptlsrv >> mdctchg;
            outfile << "Patient ID:        " << idnt << "     Error\n";
        } // Here is where errors are checked for and their additional data
          // is truncated.
        else if(idnt < 60000 && ptype == 'O' || ptype == 'o')
        {
            infile >> hsptlsrv >> mdctchg;
            outfile << "Patient ID:        " << idnt << "     Error\n";
        }
        outfile << "************************************************\n";
    }
    infile.close();
    outfile.close();
    return 0;
}
double InPatientBill(double days1, double dlrt1, double hsptlsrv1, double mdctchg1)
{
    double dyfe1, fnlchg1;
    dyfe1 = days1 * dlrt1;
    fnlchg1 = dyfe1 + hsptlsrv1 + mdctchg1;
    return fnlchg1;
}
double OutPatientBill(double hsptlsrv2, double mdctchg2)
{
    double fnlchg2;
    fnlchg2 = hsptlsrv2 + mdctchg2 + 10;
    return fnlchg2;
}