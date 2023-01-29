#include <iostream>
using namespace std;
int main(int argc, char **argv){
    size_t n{10};
    int *ptr1{new(nothrow)int[n]{}};
    int *ptr2{new(nothrow)int[n]{1,2,3,4,5}};

    if(ptr2)
        cout<<sizeof(ptr2)<<endl;
        for(size_t i{0};i<n;i++){
            cout<<ptr2[i]<<" "<<*(ptr2+i)<<"  "<<i<<endl;
    }

    delete[] ptr1;
    ptr1 = nullptr;
    delete[] ptr2;
    ptr2 = nullptr;
    
}