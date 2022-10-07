#include <iostream>
using namespace std;

int main(int argc, char **argv){
    signed int value1{1};
    signed int value2{-1};
    
    cout<<"sizeof(value1)  : "<<sizeof(value1)<<endl;
    cout<<"sizeof(value2)  : "<<sizeof(value2)<<endl;
    
    unsigned int value3{1};
    //unsigned int value4{-1}; --> Compiler error
} 