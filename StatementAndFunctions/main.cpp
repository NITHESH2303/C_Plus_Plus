#include <iostream>
using namespace std;

int addNumbers(int first, int second){
    int result = first + second;
    return result;

}

int main(){
    int first {13};
    int second {7};
    cout<<"First :"<<first<<endl<<"Second :"<<second<<endl;
    int sum = addNumbers(first, second);
    //sum = -+sum;
    //addNumbers(17,4);
    cout<<"Sum :"<<sum<<endl;
    sum =  --sum + --sum;
    cout<<"Sum :"<<sum<<endl;
    return 0;
    
}