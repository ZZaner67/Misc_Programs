/*Zane Brown
  Counting Letters with for and switch/Le Letters
  1044-202 CMPS 1
  4/3/2020
  This program take multiple lines of random characters
  and counts them one by one using for loops and switches
  instead of while loops and if/else statements*/
#include<iomanip>
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ifstream infile;
    ofstream outfile;
    infile.open("input.txt");
    outfile.open("output.txt");
    int count, acnt = 0, bcnt = 0, ccnt = 0, dcnt = 0, ecnt = 0;
    int fcnt = 0, gcnt = 0, hcnt = 0, icnt = 0, jcnt = 0, thcnt = 0, lncnt;
    string line, lttrpk;
    char* letter;
    char fnlttr;

    for (count = 0; count <= 11; count++)
    { // this for loop retrives the lines from the input
        infile >> line;
        for (lncnt = 0; lncnt <= 24; lncnt++)
        {// this for loop breaks the lines down into characters.
            lttrpk = line.substr(lncnt, 1);
            letter = const_cast<char*>(lttrpk.c_str());
            fnlttr = letter[0];
            
            switch (fnlttr)
            { // this swithc statment checks the chars and
              // counts them one by one.
                case 'a': acnt++; break;
                case 'A': acnt++; break;
                case 'b': bcnt++; break;
                case 'B': bcnt++; break;
                case 'c': ccnt++; break;
                case 'C': ccnt++; break;
                case 'd': dcnt++; break;
                case 'D': dcnt++; break;
                case 'e': ecnt++; break;
                case 'E': ecnt++; break;
                case 'f': fcnt++; break;
                case 'F': fcnt++; break;
                case 'g': gcnt++; break;
                case 'G': gcnt++; break;
                case 'h': hcnt++; break;
                case 'H': hcnt++; break;
                case 'i': icnt++; break;
                case 'I': icnt++; break;
                case 'j': jcnt++; break;
                case 'J': jcnt++; break;
                default: thcnt++; break;
            }
        }
        count = count + 1;
        outfile << "_______________________________";
        outfile << "_____________________________" << '\n';
        outfile << "Line " << count << " :\n";
        outfile << "    A    B    C    D    E    F    G    H    I    J    Other\n";
        outfile << setw(5) << acnt << setw(5) << bcnt << setw(5) << ccnt;
        outfile << setw(5) << dcnt << setw(5) << ecnt << setw(5) << fcnt;
        outfile << setw(5) << gcnt << setw(5) << hcnt << setw(5) << icnt;
        outfile << setw(5) << jcnt << setw(9) << thcnt << '\n';
        outfile << "_______________________________";
        outfile << "_____________________________" << '\n';
        count = count - 1;
        // where the count of letters is reset
        acnt = 0, bcnt = 0, ccnt = 0, dcnt = 0, ecnt = 0;
        fcnt = 0, gcnt = 0, hcnt = 0, icnt = 0, jcnt = 0, thcnt = 0;
    }
    infile.close();
    outfile.close();
    return 0;
}