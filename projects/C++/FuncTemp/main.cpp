#include <iostream>
using namespace std;

template <typename T>
T maxi(T a, T b){
    return a > b ? a : b;
}

int main(){
    int  x=3.54,y=5.557; 
    int *px{&x};
    int *py{&y};
    auto  result = maxi(px, py); 
    cout<<*result<<endl;
    return 0;
} 