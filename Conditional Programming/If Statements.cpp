#include <iostream>

/*
If Statement
    - Allows things to be done based on a condition being true or false.

*/

int main(){
int num1 {76};
int num2 {12};

std::cout << "num1 : " << num1 << std::endl;
std::cout << "num2 : " << num2 << std::endl;

std::cout << std::boolalpha;
bool result(num1 > num2);

//if clause:
std::cout << "result : " << result << std::endl;
if (result == true){
    std::cout << "num1 is greater than num2." << std::endl;

}
if (result == false){       // if (!(result == true))
    std::cout << "num1 is less than num2." << std::endl;
}


// else clause:
std::cout << std::endl;

if (result == true){
    std::cout << "num1 is greater than num2." << std::endl;
}else{
    std::cout << "num1 is less than num2." << std::endl;
}
std::cout << std::endl;
// Using expression as condition directly:
    if (num1 > num2){
        std::cout << "num1 is greater than num2." << std::endl;
    }else{
        std::cout << "num1 is less than num2." << std::endl;
    }
std::cout << std::endl;


// Nested conditions:
bool red {false};
bool green {true};
bool yellow {false};
bool police_stop {true};

if(red){
    std::cout << "stop" << std::endl;
}
if(green){
    std::cout << "go" << std::endl;
}

// 
if(green){
    if(police_stop){        // stop
        std::cout << "stop" << std::endl;
    }
    else{
        std::cout << "go" << std::endl;
        std::cout << std::endl;
    }
}

// Using logical operators with nested conditions:

if (green && !police_stop){     // stop
    std::cout << "go" << std::endl;
}else{
    std::cout << "stop" << std::endl;
}
std::cout << std::endl;



return 0;
}

