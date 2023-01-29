#include <iostream>



int main(){

	//Non const reference
	std::cout << std::endl;
	std::cout << "Non const reference : " << std::endl;
	int age {27};
    const int& ref_age{age};
	
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;
	
	
	//Can modify original variable through reference
	std::cout << std::endl;
	std::cout << "Modify original variable through reference : " << std::endl;
	
	age++; //Mofify through reference
	
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;
    

   //Simulating reference behavior with pointers
    int*  p_age {&age};
    std::cout <<* p_age<<std::endl;
   *p_age = 45;
   std::cout << "p_age : " << *p_age << std::endl;
   std::cout << "age : " << age << std::endl;
	
   
    return 0;
}