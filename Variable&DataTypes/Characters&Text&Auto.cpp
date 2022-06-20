#include <iostream>

/*
Characters and Text:
    - Use data type "char" to store data as characters.
    - Char occupies one byte in memory.
    
    ASCII Table:
        - Is a system that stores ASCII code to corresponding ASCII code.
        - ASCII code can represent text on a computer.
        A = 65          a = 97
        B = 66          b = 98
        ...             ...
        Z = 90          z = 122
    

Auto keyword: Lets the compiler deduce the type.
    - Comes in handy for longer type names


*/

int main(){

    char char1 {'a'};
    char char2 {'b'};
    char value = 65; // ASCII character code for 'A'
    std::cout << char1 << std::endl;
    std::cout << char2 << std::endl;
// One byte in memory: 2^8 = 258 different values (8 bits).
    std::cout << "------------------------------" << std::endl;
    std::cout << "value: " << value << std::endl;   // Prints 'A'.
    std::cout << "value(int): " << static_cast<int>(value) << std::endl;    // Takes the values an interprets the value as an integer. static_cast allows transformation from char to int.
    std::cout << "The value is " << sizeof(value) << " bytes." << std::endl;
    std::cout << "------------------------------" << std::endl;

    auto var1 {12};     //int
    auto var2{13.0};    //Deduces double
    auto var3 {14.0f};  //Float
    auto var4 {15.0l};  //long double
    auto var5 {'e'};       //char
    // int modifier suffixes:
    auto var6 {123u}; // unsigned int
    auto var7 {123ul}; // unsigned long
    auto var8 {123ll}; // long long 

std::cout << "var 1: " << sizeof(var1) << " bytes." << std::endl;   // 4 bytes
std::cout << "var 2: " << sizeof(var2) << " bytes." << std::endl;   // 8 bytes
std::cout << "var 3: " << sizeof(var3) << " bytes." << std::endl;   // 4 bytes
std::cout << "var 4: " << sizeof(var4) << " bytes." << std::endl;   // 16 bytes
std::cout << "var 5: " << sizeof(var5) << " bytes." << std::endl;   // 1 byte
std::cout << "var 6: " << sizeof(var6) << " bytes." << std::endl;   // 4 bytes
std::cout << "var 7: " << sizeof(var7) << " bytes." << std::endl;   // 4 bytes
std::cout << "var 8: " << sizeof(var8) << " bytes." << std::endl;   // 8 bytes

    return 0;
}
