#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){
    int *ptr1;
    int n{23};
    ptr1 = &n;
    cout<<endl;
    cout<<n<<endl<<ptr1<<endl<<&n<<endl<<*ptr1<<endl;

    int *ptr{};
    ptr = new int;
    *ptr = 25;
    cout<<*ptr<<endl;
    delete ptr;
    ptr = nullptr;
}
