#include <iostream>

/*
Pointer to character


*/

int main(){
char *p_char_var {nullptr};
char char_var {'A'};
p_char_var = &char_var;

std::cout << "Value stored in p_char_var : " << *p_char_var << std::endl;   // A
char char_var1 {'C'};
p_char_var = &char_var1;
std::cout << "Value stored in p_char_var : " << *p_char_var << std::endl;      // C

// Initializing with a literal (C-string)
/*
char* p_message{"Hello"};       // Expands string into array of characters. Uses pointers to reference address of each char
std::cout << p_message << std::endl;

std::cout << "Value stored at p_message : " << *p_message << std::endl;
*/

// Can modify the char array initialized with string literal;
char message2[] {"Hello There"};
message2[0] = 'T';  // Reassigns first index in the char array to 'T'
std::cout << "message2 : " << message2 << std::endl;    // Tello There

return 0;

}
