/* Zane Brown
   Dr. Halverson
   5/6/2020
   Le Array
   This Program takes integers from a file, places
   them into an array and prints them.
   They also calculate a third array by using the
   first two.*/
#include<iomanip>
#include<fstream>
#include<iostream>
using namespace std;
int COMPUTE(int ArrayA, int ArrayB); // This function uses addition
int MAXARRAY(int ArrayA, int ArrayB); // This function compares integers
int main()
{
    ifstream infile;
    ofstream outfile;
    infile.open("input.txt");
    outfile.open("output.txt");
    outfile << "Student: Zane Brown\n" << '\n';
    const int ISIZE = 25; // This is where the Array size is set
    int ArrayA[ISIZE], ArrayB[ISIZE], ArrayC[ISIZE];
    double ArAs = 0, ArBs = 0, ArCs = 0, ArC2s = 0;
    double ArAa = 0, ArBa = 0, ArCa = 0, ArC2a = 0;
    outfile << "Array A" << '\n';
    outfile << fixed << setprecision(2);
    for (int count = 0; count <= 24; count++)
    {
        infile >> ArrayA[count];
        outfile << count << ". " << setw(5) << ArrayA[count] << '\n';
        ArAs = ArAs + ArrayA[count];
        ArAa = ArAs / 25;
    }
    outfile << "Sum: " << ArAs << '\n';
    outfile << "Average: " << ArAa << '\n';
    outfile << '\n' << "Array B" << '\n';
    for (int count = 0; count <= 24; count++)
    {
        infile >> ArrayB[count];
        outfile << count << ". " << setw(5) << ArrayB[count] << '\n';
        ArBs = ArBs + ArrayB[count];
        ArBa = ArBs / 25;
    }
    outfile << "Average: " << ArBa << '\n';
    outfile << "Sum: " << ArBs << '\n';
    for (int count = 0; count <= 24; count++)
    { // This for loop sends data to a function and returns
        // integers for ArrayC through addition
        ArrayC[count] = COMPUTE(ArrayA[count], ArrayB[count]);
    }
    outfile << '\n' << "Array C Addition" << '\n';
    for (int count = 0; count <= 24; count++)
    {
        outfile << count << ". " << setw(5) << ArrayC[count] << '\n';
        ArCs = ArCs + ArrayC[count];
        ArCa = ArCs / 25;
    }
    outfile << "Average: " << ArCa << '\n';
    outfile << "Sum: " << ArCs << '\n';
    for (int count = 0; count <= 24; count++)
    {
        ArrayC[count] = MAXARRAY(ArrayA[count], ArrayB[count]);
    }
    outfile << '\n' << "Array C Maximum" << '\n';
    for (int count = 0; count <= 24; count++)
    {
        outfile << count << ". " << setw(5) << ArrayC[count] << '\n';
        ArC2s = ArC2s + ArrayC[count];
        ArC2a = ArC2s / 25;
    }
    outfile << "Average: " << ArC2a << '\n';
    outfile << "Sum: " << ArC2s << '\n';
    infile.close();
    outfile.close();
    return 0;
}
int COMPUTE(int ArrayA, int ArrayB)
{
    int ArrayC;
    for (int count = 0; count <= 24; count++)
    {
        ArrayC = ArrayA + ArrayB;
    }
    return ArrayC;
}
int MAXARRAY(int ArrayA, int ArrayB)
{
    int ArrayC;
    if (ArrayA > ArrayB)
        ArrayC = ArrayA;
    else
        ArrayC = ArrayB;
    return ArrayC;
}