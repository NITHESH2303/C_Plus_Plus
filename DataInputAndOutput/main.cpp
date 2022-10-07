#include <iostream>
#include <string>
using namespace std;

int main(){
    /*cout << "hello" << endl;
    int age{20};
    cout << age << endl;
    
    cerr <<"Error:wrong number of arguments" << endl;
    clog<<"log: lol..." << endl;
    
    int age1;
    string name;
    cout << "enter name & age: "<< endl;
    cin >> name;
    cin >> age1;
    cout<<"hello "<<name<<" you "<<age1<<endl;*/
    
     string fullname;
     int age3;
     cout<<"enter fullname and age :"<<endl;
     getline(cin, fullname);
     cin >> age3;
     cout<<"hello "<<fullname<<" you "<<age3<<endl;
     
     return 0; 
}