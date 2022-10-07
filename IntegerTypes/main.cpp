#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
    int n; // ---> Garbage value
    int n1{}; // ---> Initialization to 'zero'
    int n2{2};
    double n3{3.5};
    int n4(3.5);

    //int t1{n2+n3}; // ---> error code
    int t2{n2+n4}; // ---> prints int value
    
    cout<<n<<endl<<n1<<endl<<t2;
    return 0;
} 