// Zane Brown, with help from Micah Haigood
// 11/17/2022
// CMPS 4103-101 Mini Project #3
// Dr. Nelson Passos
// This program reads data from an input file called "spice.txt"
// and determines the number of unique segments and unique
// pages from the data address.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{  
    //open input file
    ifstream infile("spice.txt");

    //arrays yo hold data
    bool segArr[1024];
    bool pageArr[2048];

    unsigned int segData, pageData;//unsigned ints to hold input data
    int segCount = 0;//counts unique segments
    int pageCount = 0;//counts unique pages

    //sets array elements to false
    for (int i = 0; i < 1024; i++)
    {
        segArr[i] = false;
        pageArr[i] = false;
        pageArr[i + 1024] = false;
    }


    while (!infile.eof())
    {
        infile >> segData;//reads in number
        infile >> hex >> segData;//overwrites number with data address
        
        //copies data
        pageData = segData;

        segData = segData >> 22; //sets desired bits
        pageData = (pageData >> 11) & 2047; //sets desired bits

        //Checks for unique segments
        if (segArr[segData] == false)
        {
            segArr[segData] = true;
            segCount++;
        }
        //Checks for unique pages
        if (pageArr[pageData] == false)
        {
            pageArr[pageData] = true;
            pageCount++;
        }
    }

    infile.close();

    cout << "Unique Segments: " << segCount << endl;
    cout << "Unique Pages: " << pageCount << endl;

    return 0;
}