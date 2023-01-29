#include <iostream>
#include <string_view>
using namespace std;

class Dog{
    public:
        Dog() = default;
        Dog(string_view name_param, string_view breed_param,int age_param);
        ~Dog();

    private:
        string name;
        string breed;
        int *p_age{nullptr};
};

Dog::Dog(string_view name_param, string_view breed_param, int age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param; 
    std::cout << "Dog destructor called for : " << name << std::endl;
}

Dog::~Dog(){
    delete p_age; 
    cout<<"Dog deleted! "<<name<<endl;
}

void some_func(){
    Dog * p_dog = new Dog("Fluffy","Shepherd",2);
    delete p_dog;
    
}

int main(int argc, char** argv){
    // some_func();
   Dog dog1("dogyy1","Shepherd",2);
   Dog dog2("dogyy2","Shepherd",2);
   Dog dog3("dogyy3","Shepherd",2);
   Dog dog4("dogyy4","Shepherd",2);
   return 0;
}