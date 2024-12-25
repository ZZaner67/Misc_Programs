/*Zane Brown
  Dr. Halverston
  3/6/2020
  Division of Nlogonia/Le Devision program
  This program uses If/Else statements along with EOF
  in order to locate and identify which country a city is in
  or between.*/
#include<fstream>
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{ // Where our division point and our city points are declared.
	int dvpx, dvpy, lept1x, lept1y, count;
	ifstream infile;
	ofstream outfile;
	infile.open("NLd3.txt");     // Here is where the file with the
	outfile.open("output.txt");  // cities coords are opened into the program
	infile >> dvpx >> dvpy;
	outfile << "Student: Zane Brown \n";
	outfile << '\n';
	cout << "The division point is " << dvpx << ", " << dvpy << '\n';
	outfile << "The division point is " << dvpx << ", " << dvpy << '\n';
	while(infile >> lept1x >> lept1y) // Beginning of the while loop
	{								  //  where it reads the city points
		// Here it checks the city's coords and assigns
		//  the country in which they fall under
		cout << setw(6) << lept1x << setw(6) << lept1y;
		outfile << setw(6) << lept1x << setw(6) << lept1y;
		if (lept1x > dvpx && lept1y > dvpy)
		{
			cout << "   Kiowa" << '\n';
			outfile << "   Kiowa" << '\n';
		}
		else if (lept1x < dvpx && lept1y > dvpy)
		{
			cout << "   Comanche" << '\n';
			outfile << "   Comanche" << '\n';
		}
		else if (lept1x > dvpx && lept1y < dvpy)
		{
			cout << "   Tepee" << '\n';
			outfile << "   Tepee" << '\n';
		}
		else if (lept1x < dvpx && lept1y < dvpy)
		{
			cout << "   Nocona" << '\n';
			outfile << "   Nocona" << '\n';
		}
		else if (lept1x == dvpx && lept1y > dvpy)
		{
			cout << "   Between Comanche and Kiowa" << '\n';
			outfile << "   Between Comanche and Kiowa" << '\n';
		}
		else if (lept1x == dvpx && lept1y < dvpy)
		{
			cout << "   Between Nocona and Tepee" << '\n';
			outfile << "   Between Nocona and Tepee" << '\n';
		}
		else if (lept1x > dvpx&& lept1y == dvpy)
		{
			cout << "   Between Kiowa and Tepee" << '\n';
			outfile << "   Between Kiowa and Tepee" << '\n';
		}
		else if (lept1x < dvpx && lept1y == dvpy)
		{
			cout << "   Between Comanche and Nocona" << '\n';
			outfile << "   Between Comanche and Nocona" << '\n';
		}
		else if (lept1x == dvpx && lept1y == dvpy)
		{
			cout << "   Division Point" << '\n';
			outfile << "   Division Point" << '\n';
		}
	}  // The end of the city coords assignment while loop

	infile.close();
	outfile.close();
	return 0;
} // End of the program