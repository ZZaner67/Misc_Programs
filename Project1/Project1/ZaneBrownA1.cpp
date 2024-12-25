//**************************************************************
//                   Assignment #1
//                    Name: Zane Brown
//                    Data Structures Date: Date of Submission (2/17/2022)
//***************************************************************
//	This program takes a two given variables and calculates a Magnitude
//	and a phase. With both the magnitude and the phase it then calculates
//	the phasor of those two variables.
//*****************************************************************
//*******************************************************************
//	phasor() The Default contructor
//  phasor(int x, int y) A used defined contructor
//  void setMagnitude(int x) Sets the Magnitude value
//	int getMagnitude() Get the Magnitude Value
//	void setPhase(int y) Sets the Phase Value
//	int getPhase() Gets the Phase Value
//	phasor ovmult(phasor Ea, phasor Eb) Multiplies two Phasors, Is Overloaded
//	phasor ovdiv(phasor Ea, phasor Eb) Divides two Phasors, Is Overloaded
//********************************************************************


#include <fstream>
#include <math.h>
#include <fstream>
#include <iostream>
using namespace std;

class phasor
{
	private: 
		int mag;
		int phase;
	public:
		phasor()
		{
			mag = 0;
			phase = 0;
		};
		phasor(int x, int y)
		{
			mag = sqrt((x ^ 2) + (y ^ 2));
			phase = atan(y / x);
			phase = phase * (180 / 3.14159265358979329846);
			if (phase < 0)
				phase = phase + 360;

		};
		void setMagnitude(int x)
		{
			mag = x;
		};
		int getMagnitude()
		{
			return mag;
		};
		void setPhase(int y)
		{
			if (y < 0)
				phase = y + 360;
			else
				phase = y;
		};
		int getPhase()
		{
			return phase;
		};
		phasor ovmult(phasor Ea, phasor Eb)
		{
			phasor Ec;
			Ec.mag = Ea.mag * Eb.mag;
			Ec.phase = Ea.phase + Eb.phase;
			return Ec;
		}
		phasor ovdiv(phasor Ea, phasor Eb)
		{
			phasor Ec;
			Ec.mag = Ea.mag / Eb.mag;
			Ec.phase = Ea.phase - Eb.phase;
			return Ec;
		}
		~phasor()
		{

		};
};

int main()
{
	int magn = 0, phas = 0;
	phasor A, D;

	phasor B(sqrt(2), -sqrt(2));
	phasor C(sqrt(2), sqrt(3));

	A.setMagnitude(3);
	A.setPhase(-45);

	D = D.ovmult(B, C);

	cout << "=================================\n";
	cout << "This is A\n";
	cout << "Magnitude: " << A.getMagnitude() << "  Phase: " << A.getPhase() << "\n";
	cout << "=================================\n";
	cout << "This is B\n";
	cout << "Magnitude: " << B.getMagnitude() << "  Phase: " << B.getPhase() << "\n";
	cout << "=================================\n";
	cout << "This is C\n";
	cout << "Magnitude: " << C.getMagnitude() << "  Phase: " << C.getPhase() << "\n";
	cout << "=================================\n";
	cout << "This is D = B * C\n";
	cout << "Magnitude: " << D.getMagnitude() << "  Phase: " << D.getPhase() << "\n";
	D = D.ovdiv(B, C);
	cout << "=================================\n";
	cout << "This is D = B / C\n";
	cout << "Magnitude: " << D.getMagnitude() << "  Phase: " << D.getPhase() << "\n";
};