#include <iostream>
using namespace std;

int main(){

    // exception mechanism
    // try{
    // int *n{new int[100000000000000000]};
    // for (size_t i=0; i<100000000000000000; i++){
    //     int *p=new int[100000000000000000];
    // }
    // }catch(exception & ex){
    //     cout << ex.what() << endl;
    // }

    //no throw
    for (size_t i=0; i<10; i++){
        int *n{new(nothrow) int[100000000000000000]};
    //for (size_t i=0; i<100000000000000000; i++){
         //int *p=new int[100000000000000000];
    if(n!=nullptr) {
        cout<<"data done"<<endl;
    }
    else{
        cout<<"data error"<<endl;
    }
    }
}