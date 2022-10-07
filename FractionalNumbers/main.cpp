#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float n1{1.1234567890987654321f};//precision 7
    double n2{1.1234567890987654321};//precision 15
    long double n3{1.1234567890987654321L};//precision 15+
    
    cout<<setprecision(20);
    cout<< n1 <<endl<< n2 <<endl << n3 << endl;
    cout<<sizeof(float) << endl;
    cout<<sizeof(double) << endl;
    cout<<sizeof(long double) << endl;
    
    float n4{11234567.890987654321f};
    cout<<n4;
    
}