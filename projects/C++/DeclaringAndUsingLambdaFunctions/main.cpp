#include<iostream>
using namespace std;

int main(int argc, char** argv){
    // auto func=[](){
    //     cout<<"Welcome"<<endl;
    // };
    // func();

    // [](double x,double y){
    //     cout<<"x: "<<x<<endl;
    //     cout<<"y: "<<y<<endl;
    //     cout<< "x + y : " << x+ y<<endl;
    // }(10.05,9.95);

    // auto func = [](double x,double y){
    //     cout<<"x: "<<x<<endl;
    //     cout<<"y: "<<y<<endl;
    //     cout<<"x + y : "<<x+y<<endl;
    // };
    // func(550.358,45310.01);
    // func(45.01,64.0513);
    

    auto result = [](double x,double y){
        return x*y;
    }(25,10); 
    cout<<"result: "<<result<<endl;
    cout<<"Done!"<<endl;
}