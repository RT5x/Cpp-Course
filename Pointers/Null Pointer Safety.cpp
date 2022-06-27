#include <iostream>

/*
Null Pointer Safety: Making sure that pointers contain valid addresses.
    - Verbose nullptr check
    - Compact nullptr check
    Calling delete on a nullptr

*/

int main(){

int *p_number {};   // Inititalized to nullptr by implicit initialization
p_number = new int{3};

// Verbose
if(!(p_number == nullptr)){
    std::cout << "The pointer has a valid address." << std::endl;
    std::cout << "p_number : " << *p_number << std::endl;
}else{
    std::cout << "The pointer has an invalid address." << std::endl;
}
std::cout << std::endl;
// Compact
if(p_number){
    std::cout << "The pointer has a valid address." << std::endl;
}else{
    std::cout << "The pointer has an invalid address." << std::endl;
}
std::cout << std::endl;
delete p_number;
p_number = nullptr;

int* p_number1{};
delete p_number1;   // Can call delete on a nullptr without problems.


std::cout << "Program ended successfully." << std::endl;
return 0;

}



