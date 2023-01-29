#include <iostream>
using namespace std;

int main(int argc, char** argv){

    // int a{10};
    // int b{20};

    // auto func = [a,b](){
    //     cout << a+b<<endl;
    //     };
    // func();

    // int c{42};
     
    // auto func = [c](){
    //     std::cout << "Inner value : " << c << " &inner : " <<&c <<  std::endl;
    // };
     
    // for(size_t i{} ; i < 5 ;++i){
    //     std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
    //     func();
    //     ++c;
    // }

    int c{42};
     
     auto func = [&c](){
         std::cout << "Inner value : " << c << " &inner : " <<&c <<  std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
         func();
         ++c;
     }
    
    return 0;
}

 n n 