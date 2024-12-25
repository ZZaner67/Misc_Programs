/*Zane Brown
  Counting Letters in Lines/Le Counting
  1044-202 CMPS 1
  3/24/2020
  This program take multiple lines of random characters
  and counts them one by one.*/
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
	cout << "Student: Zane Brown\n";
	cout << '\n';
	outfile << "Student: Zane Brown\n";
	outfile << '\n';
	/*This is where all of the letter counts are set to zero and declared*/
	int count = 1, acnt = 0, bcnt = 0, ccnt = 0, dcnt = 0, ecnt = 0;
	int i = 0, fcnt = 0, gcnt = 0, hcnt = 0, icnt = 0, jcnt = 0, thcnt = 0, lncnt = 1;
	string line;
	char letter;
	while(infile >> line)
	{//Outer While loops controls the lines and the input file
		count = 0;
		while (count <= 25)
		{//Inner loop controls the counting of the individual characters
			if ( line[count] == 'a' || line[count] == 'A')
			{
				acnt++;
			}
			else if (line[count] == 'b' || line[count] == 'B')
			{
				bcnt++;
			}
			else if (line[count] == 'c' || line[count] == 'C')
			{
				ccnt++;
			}
			else if (line[count] == 'd' || line[count] == 'D')
			{
				dcnt++;
			}
			else if (line[count] == 'e' || line[count] == 'E')
			{
				ecnt++;
			}
			else if (line[count] == 'f' || line[count] == 'F')
			{
				fcnt++;
			}
			else if (line[count] == 'g' || line[count] == 'G')
			{
				gcnt++;
			}
			else if (line[count] == 'h' || line[count] == 'H')
			{
				hcnt++;
			}
			else if (line[count] == 'i' || line[count] == 'I')
			{
				icnt++;
			}
			else if (line[count] == 'j' || line[count] == 'J')
			{
				jcnt++;
			}
			else
			{
				thcnt++;
			}
			count++;
		}
		thcnt--;
		lncnt++;
		cout << "____________________________________________________________" << '\n';
		cout << "Line " << lncnt << " :\n";
		cout << "    A    B    C    D    E    F    G    H    I    J    Other\n";
		cout << setw(5) << acnt << setw(5) << bcnt << setw(5) << ccnt;
		cout << setw(5) << dcnt << setw(5) << ecnt << setw(5) << fcnt;
		cout << setw(5) << gcnt << setw(5) << hcnt << setw(5) << icnt;
		cout << setw(5) << jcnt << setw(9) << thcnt << '\n';
		cout << "____________________________________________________________" << '\n';
		outfile << "____________________________________________________________" << '\n';
		outfile << "Line " << lncnt << " :\n";
		outfile << "    A    B    C    D    E    F    G    H    I    J    Other\n";
		outfile << setw(5) << acnt << setw(5) << bcnt << setw(5) << ccnt;
		outfile << setw(5) << dcnt << setw(5) << ecnt << setw(5) << fcnt;
		outfile << setw(5) << gcnt << setw(5) << hcnt << setw(5) << icnt;
		outfile << setw(5) << jcnt << setw(9) << thcnt << '\n';
		outfile << "____________________________________________________________" << '\n';
		// Here all of the letter counts are returned to 0
		acnt = 0;
		bcnt = 0;
		ccnt = 0;
		dcnt = 0;
		ecnt = 0;
		fcnt = 0;
		gcnt = 0;
		hcnt = 0;
		icnt = 0;
		jcnt = 0;
		thcnt = 0;
	}
	infile.close();
	outfile.close();
	return 0;
}