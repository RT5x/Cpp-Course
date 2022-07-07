#include <iostream>

/*

Character Manipulation: Allows manipulation of each index in a character array.
    Check if a character is:
        - Alphanumeric
        - alphabetic
        - blank
        -uppercase
        - lowercase
        - digit
    documentation: https://en.cppreference.com/w/cpp/header/cctype
*/

int main(){
std::cout << std::boolalpha;
// Check if char is alphanumeric: 
std::cout << "std::isalnum :" <<std::endl;
std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;
std::cout << "& is alphanumeric : " << std::isalnum('&') << std::endl;

char character {'('};
if(std::isalnum(character)){
    std::cout << character << " is alphanumeric." << std::endl;
}else{
    std::cout << character << " is not alphanumeric. " << std::endl;
}

// Check if char is alphabetic
std::cout << std::endl;
std::cout << "std::isalpha : " << std::endl;
std::cout << "C is alphabetic : " << std::isalpha('C') << std::endl;
std::cout << "$ is alphabetic : " << std::isalpha('$') << std::endl;
std::cout << "B is alphabetic : " << std::isalpha('B') << std::endl;

// Check if char is blank:
std::cout << std::endl;
std::cout << "std::isblank : " << std::endl;
char msg [] {"Hello, this is a character array message."};

// Find blank indices:
unsigned blank_count{};
for(size_t i{}; i < std::size(msg); ++i){
    bool is_blank {std::isblank(msg[i])};
    blank_count += is_blank;
    if(std::isblank(msg[i])){
    std::cout << "Found a blank character at index : [" << i << "]" << std::endl;}
}
std::cout << "There were " << blank_count << " blank characters in the character array msg" << std::endl;
std::cout << std::endl;
// Check if uppercase or lowercase
std::cout << "std::islower and std::isupper : " << std::endl;
char str1[] {"This is an example string in a character array in C++."};
int lowercase_count{};
int uppercase_count{};
std::cout << "Original string : " << str1 << std::endl;

// Find uppercases:
for(size_t i{}; i < std::size(str1); ++i){
    bool is_uppercase {std::isupper(str1[i])};
    bool is_lowercase {std::islower(str1[i])};
    uppercase_count += is_uppercase;
    lowercase_count += is_lowercase;
}
std::cout << "There were " << lowercase_count << " lowercase characters and " << uppercase_count << " uppercase characters in the original string." << std::endl;
std::cout << std::endl;

// Check if a character is a digit:
std::cout << "std::isdigit : " << std::endl;
char statement[] {"In 2022, I live on 2882 Westmont Lane, and I have 3 dogs, 2 cats, and 1 television."};
int digit_count {};
for (auto character : statement){
    if(std::isdigit(character)){
        std::cout << "Found a digit : " << character << std::endl;
        ++digit_count;
    }
}
std::cout << "There were " << digit_count << " digits in the statement." << std::endl;

// Turn characters into lower/upper case:
std::cout << std::endl;
std::cout << "std::tolower and std::toupper : " << std::endl;
char original_str[] {"EA sports. It's in the game."};
char dest_str[std::size(original_str)];

// Turn into uppercase:
for(size_t i{}; i < std::size(original_str); ++i){
    dest_str[i] = std::toupper(original_str[i]);
}

std::cout << "original string : " << original_str << std::endl;
std::cout << "uppercase string : " << dest_str << "\n";

// Turn string into lowercase
for(size_t i{}; i < std::size(original_str); i++){
     dest_str[i] = std::tolower(original_str[i]);
}

std::cout << "lowercase string : " << dest_str << std::endl;
std::cout << std::endl;

return 0;

}

