#include <iostream>
#include <limits>
using namespace std;

int main(){

    cout<<numeric_limits<short>::min()<<" "<<numeric_limits<short>::max()<<endl;
    cout<<numeric_limits<unsigned short>::min()<<" "<<numeric_limits<unsigned short>::max()<<endl;
    cout<<numeric_limits<int>::min()<<" "<<numeric_limits<int>::max()<<endl;
    cout<<numeric_limits<unsigned int>::min()<<" "<<numeric_limits<unsigned int>::max()<<endl;
    cout<<numeric_limits<long>::min()<<" "<<numeric_limits<long>::max()<<endl;
    return 0;   
}