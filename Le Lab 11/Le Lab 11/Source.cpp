#include <iostream>
#include <fstream>
#include <cstdlib> // For the exit function
#include <string>
using namespace std;
int main()
{
	ifstream infile;
	struct Student {
		string lastName;
		string firstName;
		int classification;
		float gpa;
	};
	Student list[100];
	int num; // Number of records in file
	infile.open("names.txt");
	if (!infile) // file could not be opened
	{
		cerr << "Error: file could not be opened" << '\n';
		system("pause");
		exit(1);
	}
	infile >> num; // Read in the number of records in the file
	// Read in the file line by line
	for (int i = 0; i < num; i++)
	{
		infile >> list[i].lastName >> list[i].firstName >>
			list[i].classification >> list[i].gpa;
	}
	// Print out the third record for as test case
	cout << list[3].firstName << " " << list[3].lastName << " "
		<< list[3].classification << " " << list[3].gpa << '\n';
	system("pause");
	return 0;
}
