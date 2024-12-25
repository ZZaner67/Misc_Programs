#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct le_colorz
{
    int rd;
    int grn;
    int blu;
};

int main()
{
    /*This is the great amalgamtion of my starting code since i haven't written in C++ in like a year*/
    string le_t;
    int le_w= 0, le_h= 0, le_max, le_amax, wth = 0, hth = 0;
    ifstream le_spec;
    le_spec.open("spectrum.dat");
    le_spec >> le_t;
    le_amax = le_w * le_h;
    int le_pic[1440][1135];
    cout << le_amax;

    for (int cel = 0; cel < le_amax; cel++)
    {
        le_colorz eck;
        cout << cel;
        system("pause");



    }


    le_spec.close();





    return 0;
}