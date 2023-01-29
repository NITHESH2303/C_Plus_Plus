#include <iostream>
#include <string_view>
using namespace std;

class Dog{
    public:
        Dog() = default;
        Dog(string_view name_param, string_view breed_param,int age_param);
        ~Dog();

        void print_info(){
            std::cout << "Dog (" << this << ") : [ name : " << name 
                << " breed : " << breed << " age : " << *p_age << "]" << std::endl;
        }

        void setdog_name(string_view name){
            //name = name;
            this->name = name;
        }
        
        void setdog_breed(string_view breed){
            this->breed = breed;
        }
        void setdog_age(int age){
            *(this->p_age ) = age;
        }

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
    std::cout << "Dog destructor called for : " << name << "at "<<this<<std::endl;
}

Dog::~Dog(){
    delete p_age; 
    cout<<"Dog deleted! "<<name<<"at "<< this << endl;
}

void some_func(){
    Dog * p_dog = new Dog("Fluffy","Shepherd",2);
    delete p_dog;
    
}

int main(int argc, char** argv){
    // some_func();
   Dog dog1("dogyy1","Shepherd",2);
   dog1.print_info();
   dog1.setdog_name("nasty1");
   dog1.setdog_breed("idot");
   dog1.setdog_age(3);
   dog1.print_info();
   return 0;
}