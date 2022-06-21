#include <iostream>
#include <ios>  
#include <iomanip>
/*

    Input/Output manipulator specifications:
        https://en.cppreference.com/e/cpp/io/manip

Output formatting;
    - Using the standard libaries <ios> and <iomanip>, the output to the terminal can be changed into a more visually appealing way.

    std::endl
        - creates a new line so that statements in the terminal are not cramped together.
        std::cout << "Hello" << std::endl;
        OR
        std::cout << "Hello\n" << std::endl;
    std::flush
        - Causes immediate sending of data to the device connected to the stream.
        - Before entering the terminal, the data enters an intermediary "buffer".
        - Once the buffer is full, the data is sent to the terminal in one go.

    std::setw()
        - Allows the creation of a formatted table.
        - Specifies the width of the data you want to represent. 
        - Can use this option to format text on the right or left side of a table.
        - Internal justified: allows other elements like "-" signs to show up on different sides of a table entry.
    
    std::setfill   <iomanip>
        - Specifies the fill character in a table made in the terminal.
        - For example, you can configure a data table to have data as: 
        5 ------------ 4 ----------- 3 ------------
    
    std::boolalpha
        - Prints out "true" or "false" rather than "1" or "0".
    
    std::showpos
        - Show or hide the + sign for positive numbers in the terminal.
    std::noshowpos
        - Hides the + sign for positive numbers output in the terminal.

    std::dec, std::hex, std::oct
        - Controls the base of output numbers that are shown on the terminal.
        - Can output decimal, hexadecimal, or octal numbers in the terminal.
    std::showbase
        - shows the base for integral types.
         Not enabled:                       Enabled:
            dec: 88483                       88483
            hex: af2938                     0xaf2938
            oct: 298499                     0298499
    
    std::uppercase
        - Allows characters in hex and oct numbers to be shown in uppercase.

    std::scientific, std::fixed <ios>
        - By default, the terminal outputs in std::scientific where necessary
            - 2e3
        - Code can be configured to show fixed values as well
            - 2000

    std::setprecision  <ios>
        - Sets the number of digits printed out for a floating point.
        - Default is 6.
    
    std::showpoint  <ios>
        - Show trailing zeroes if necessary
            34.1 vs 34.1000


*/

int main(){
    // std::endl
std::cout << "Hello" << std::endl;
std::cout << "World\n" << std::endl;

    // std::flush
std::cout << "This is a message" << std::endl << std::flush;
    // Data sent directly to the terminal
std::cout << std::endl;

    // std::setw()
std::cout << "Unformatted Table" << std::endl;
std::cout << "a" << " " << "b" << "13" << std::endl;
std::cout << "c" << " " << "d" << "14" << std::endl;
std::cout << "e" << " " << "f" << "15" << std::endl;
std::cout << "g" << " " << "h" << "16" << std::endl;
std::cout << "i" << " " << "j" << "17" << std::endl;
std::cout << std::endl;
std::cout << "Formatted table: " << std::endl;

std::cout << std::setw(10) << "Letter1" << std::setw(10) << "Letter2" << std::setw(10) << "Number" << std::setw(10) << std::endl;
std::cout << std::setw(10) << "a" << std::setw(10) << "b" << std::setw(10) << "13" << std::setw(10) << std::endl;
std::cout << std::setw(10) << "c" << std::setw(10) << "d" << std::setw(10) << "14" << std::setw(10) << std::endl;
std::cout << std::setw(10) << "e" << std::setw(10) << "f" << std::setw(10) << "15" << std::setw(10) << std::endl;
std::cout << std::setw(10) << "g" << std::setw(10) << "h" << std::setw(10) << "16" << std::setw(10) << std::endl;
std::cout << std::setw(10) << "i" << std::setw(10) << "j" << std::setw(10) << "17" << std::setw(10) << std::endl;
std::cout << std::endl;

std::cout << "Formatted table with variables: " << std::endl;

int col_width{14}; // Column width (in characters) 
std::cout << std::setw(col_width) << "Letter1" << std::setw(col_width) << "Letter2" << std::setw(col_width) << "Number" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "a" << std::setw(col_width) << "b" << std::setw(col_width) << "13" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "c" << std::setw(col_width) << "d" << std::setw(col_width) << "14" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "e" << std::setw(col_width) << "f" << std::setw(col_width) << "15" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "g" << std::setw(col_width) << "h" << std::setw(col_width) << "16" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "i" << std::setw(col_width) << "j" << std::setw(col_width) << "17" << std::setw(col_width) << std::endl;
std::cout << std::endl;

std::cout << "Right justified table(default)" << std::endl;
col_width = 20;
std::cout << std::right;
// Can also use std::cout << std::left  for left-aligned data
std::cout << std::setw(col_width) << "Letter1" << std::setw(col_width) << "Letter2" << std::setw(col_width) << "Number" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "a" << std::setw(col_width) << "b" << std::setw(col_width) << "13" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "c" << std::setw(col_width) << "d" << std::setw(col_width) << "14" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "e" << std::setw(col_width) << "f" << std::setw(col_width) << "15" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "g" << std::setw(col_width) << "h" << std::setw(col_width) << "16" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "i" << std::setw(col_width) << "j" << std::setw(col_width) << "17" << std::setw(col_width) << std::endl;
std::cout << std::endl;

// Internal justified: Sign is left-justified and the data is right-justified.
std::cout << "Internal Justified" << std::endl;
std::cout << std::right;
std::cout << std::setw(10) << -123.45 << std::endl;
std::cout << std::internal;
std::cout << std::setw(10) << -123.45 << std::endl;

//=========================================

std::cout << std::endl;

std::cout << "Table with fill characters: " << std::endl;
col_width = 20;
std::cout << std::left;
std::cout << std::setfill('-'); // fill character
std::cout << std::setw(col_width) << "Letter1" << std::setw(col_width) << "Letter2" << std::setw(col_width) << "Number" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "a" << std::setw(col_width) << "b" << std::setw(col_width) << "13" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "c" << std::setw(col_width) << "d" << std::setw(col_width) << "14" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "e" << std::setw(col_width) << "f" << std::setw(col_width) << "15" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "g" << std::setw(col_width) << "h" << std::setw(col_width) << "16" << std::setw(col_width) << std::endl;
std::cout << std::setw(col_width) << "i" << std::setw(col_width) << "j" << std::setw(col_width) << "17" << std::setw(col_width) << std::endl;
std::cout << std::endl;

//==============================

//std::boolalpha

bool condition {true};
bool condition2 {false};

std::cout << "condition: " << condition << std::endl;
std::cout << "condition2: " << condition2 << std::endl;
std::cout << std::endl;
std::cout << std::boolalpha;
std::cout << "condition: " << condition << std::endl;
std::cout << "condition2: " << condition2 << std::endl;
std::cout << std::endl;

// showpos

int pos_num {34};
int neg_num {-42};
std::cout << std::endl;
std::cout << "pos_num: " << pos_num << std::endl;
std::cout << "neg_num: " << neg_num << std::endl;
std::cout << std::endl;
std::cout << std::showpos;  // Prints +34
std::cout << "pos_num: " << pos_num << std::endl;
std::cout << "neg_num: " << neg_num << std::endl;
std::cout << std::endl;
std::cout << std::noshowpos;       // Prints 34
std::cout << "pos_num: " << pos_num << std::endl;
std::cout << "neg_num: " << neg_num << std::endl;
std::cout << std::endl;

// Different number systems (std::dec, std::hex, std::oct)

int int1 {29820};
int int2 {-1039};
double int3 {2.287};
std::cout << std::endl;
std::cout << "default base format: " << std::endl;
std::cout << "int1: " << int1 << std::endl;
std::cout << "int2: " << int2 << std::endl;
std::cout << "int3: " << int3 << std::endl;
std::cout << std::endl;
std::cout << "Hexidecimal base format: " << std::endl;
std::cout << "int1: " << std::hex << int1 << std::endl; // 747c
std::cout << "int2: " << std::hex << int2 << std::endl; // fffffbf1
std::cout << "int3: " << std::hex << int3 << std::endl;
std::cout << std::endl;
std::cout << "Octal base format: " << std::endl;
std::cout << "int1: " << std::oct << int1 << std::endl;
std::cout << "int2: " << std::oct << int2 << std::endl;
std::cout << "int3: " << std::oct << int3 << std::endl;
std::cout << std::endl;

// Uppercase

std::cout << std::uppercase;
std::cout << "Hexidecimal base format: " << std::endl;
std::cout << "int1: " << std::hex << int1 << std::endl; // 747C
std::cout << "int2: " << std::hex << int2 << std::endl; // FFFFFBF1
std::cout << "int3: " << std::hex << int3 << std::endl;
std::cout << std::endl;

// Sci Notation vs Fixed format (default sci not)

double a{3.141592653589};
double b{1002.1};
double c{1.96e-8};

std::cout << std::endl;
std::cout << "Double values (default: sci notation): " << std::endl;
std::cout << std::scientific;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl;
std::cout << "c: " << c << std::endl;
std::cout << std::endl;

std::cout << "Double values (fixed): " << std::endl;
std::cout << std::fixed;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl;
std::cout << "c: " << c << std::endl;
std::cout << std::endl;

std::cout << "Revert double values to defaults: " << std::endl;
std::cout.unsetf(std::ios::scientific | std::ios::fixed);   // Tool to revert between fixed and sci not
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl;
std::cout << "c: " << c << std::endl;
std::cout << std::endl;

//setprecision

auto a1 = 4.875287652635067823587;
std::cout << std::endl;
std::cout << "a (default precision(6)): " << a  << std::endl;
std::cout << std::setprecision(10);
std::cout << "a (precision(10)): " << a  << std::endl;
std::cout << std::setprecision(20);
std::cout << "a (precision(20)): " << a  << std::endl;
std::cout << std::endl;

// If the precision is too large, terminal will output nonsense values to fill the rest of the space.

return 0;
}
