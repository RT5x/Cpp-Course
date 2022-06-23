#include <iostream>

/*
Else If Statements:
    - Tests for several conditions in an if statement.
    - only one block executes

*/

// Variables:
const int val1 {10};
const int val2 {20};
const int val3 {30};
const int val4 {40};
const int val5 {50};
const int val6 {60};

int main(){
    int value {val2};

if (value == val1){         // Use double equal signs to test for equality
    std::cout << "Variable 1 is chosen" << std::endl;
}
else if (value == val2){
 std::cout << "Variable 2 is chosen" << std::endl;
}
else if (value == val3){
    std::cout << "Variable 3 is chosen" << std::endl;
}
else if (value == val4){
    std::cout << "Variable 4 is chosen" << std::endl;
}
else if (value == val5){
    std::cout << "Variable 5 is chosen" << std::endl;
}
else if (value == val6){
    std::cout << "Variable 6 is chosen" << std::endl;
}

std::cout << "Moving on" << std::endl;  // Code skips to the net command once one else if command is true.
std::cout << std::endl;



return 0;
}

