/* Zane Brown
   Dr. Halverson
   Le Lab 10 Arrays
   4/24/2020
   The program finds the largest number and its position
   within a randomized array. It also calculates the average
   of the array.*/
#include <iostream>
#include<iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    ofstream outfile;
    outfile.open("output.txt");
    outfile << "Student: Zane Brown\n" << '\n';
    srand(5);
    const int size = 100;
    int Values[size]; int init, plc, sum = 0;
    double avg = 0;
    // The for loop that randomizes the array
    for (int count = 0; count < size; count++)
    {
        Values[count] = rand();
    }
    init = Values[0];
    // the for loop and if statement that finds the largest
    // number and its postition
    for (int count = 0; count < size; count++)
    {
        if (init > Values[count])
        {

        }
        else if (init < Values[count])
            plc = count;
            init = Values[count];
    }
    // This for loops calculates the sum of the array.
    for (int count = 0; count < size; count++)
    {
        sum = sum + Values[count];
    }
    avg = sum / 100;
    outfile << "The Largest Number is: " << init << '\n';
    outfile << "The number's position is: " << plc << '\n';
    outfile << "The average is: " << avg << '\n';
    outfile.close();
    return 0;
}
