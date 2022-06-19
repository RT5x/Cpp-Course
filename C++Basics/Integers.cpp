#include <iostream>

/*
Integers: Can be used to store single digits in data, as in the decimal system.
    - Usually take up to 4 bytes or more.
    - Must be assigned with a name without numbers as the first or last digit.
    - variable names are case-sensitive.
    - No spacial characters are allowed.
Variables: Named pieces of memory that you can use to store specific types of data.

        Declaring variables:
                typename variable_name {initializer_value};     
                typename variable_name = initializer_value;     By assignment
                typename variable_name (initializer_value);     By functional variable initialization
*/


int main(){

    int car_count;
// Variable may contain random garbage value
    int truck_count{};
// Initializes to zero by default if you add {}
    int apple_count(5);
// Uses functional variable initialization with the use of ()

    int orange_count = 3;
// Assignment initialization using "="

    int total_fruits(apple_count + orange_count);
        std::cout << "The fruit count is: " << total_fruits << std::endl;
    int narrowing_conversion_functional (2.9);
// Cuts off any extra information than the integer.
// Information is lost; less safe than braced {} initializers.
    std::cout << narrowing_conversion_functional << std::endl;
// Prints "2"
    int cat_count {10};
// Initializes to 10
    int dog_count {15};
// Initializes to 15
// Can use expression as initializer
    int pets {cat_count + dog_count};
    std::cout << "The pet count is: " << pets << std::endl;
// Note variables in the initialization must exist prior to the integer being declared. Otherwise the code will not compile.

/*
        int narrowing_conversion {2.9};
            is an example of an error arising from assigning a double to an int value.
*/

// Size of a type in memory in bytes:
    std::cout << "sizeof int: " << sizeof(apple_count) << " bytes." << std::endl;



//Storing a fractional number in an int:

// int fractional {0.4};
// std::cout << "Fraction: " << fractional << std::endl;

        // Throws up an error: narrowing conversion of '4.0000000000000002e-1' from 'double' to 'int' [-Wnarrowing]

return 0;

}

