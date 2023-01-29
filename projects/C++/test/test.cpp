#include <iostream>
#include <fstream>
#include <iomanip>
#include <ostream>
using namespace std;

int main(){
    std::cout << std::setw(10) <<"Hello " << std::setw(15) << "World!" <<flush<< std::endl;

    int col_width = 50;
    cout<<left;
    cout<<setw(col_width) <<"abc"<<setw(col_width) <<"xyz"<<endl;
    cout<<right;
    cout<<setfill('-');
    cout<<setw(col_width) <<"abc"<<setw(col_width) <<"xyzz"<<endl;
    int pos{10};
    int negpos{-10};
    cout<<showpos;
    cout<<pos <<endl;
    cout<<negpos<<endl;

    cout<<dec<<pos <<endl;
    cout<<hex<<pos <<endl;
    cout<<oct<<pos <<endl;

    cout<<showbase;

    cout<<dec<<pos <<endl;
    cout<<hex<<pos <<endl;
    cout<<oct<<pos <<endl;

    cout<<uppercase;
    cout<<dec<<pos <<endl;
    cout<<hex<<pos <<endl;
    cout<<oct<<pos <<endl;

    double a{3.01456789012345678901234567890123};
    cout<<fixed;
    cout<<a <<endl;

    cout<<scientific;
    cout<<a <<endl;

    cout.unsetf(ios::scientific | ios::fixed);

    double b{12.0000};
    cout<<showpoint;
    cout<<b <<endl;

    cout<<noshowpoint;
    cout<<b <<endl;

    return 0;
}