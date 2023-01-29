#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){
    int a{23};
    int b{24};
    auto max = (a>b? a: 12.5);
    cout<<max<<endl;
}