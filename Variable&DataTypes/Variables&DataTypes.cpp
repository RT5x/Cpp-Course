#include <iostream>

/*
Primitive Data Types:
    - int: Stores a whole integer.
    - double: Used to store a number with a decimal point (two digits).
    - float: Stores double-precision floating-point numbers with up to 17 significant digits
    - char: Used to represent a character in memory.
    - bool: Stores a statement as True or False.
    - void: Represents 
    - auto: A keyword used to deduce other types.
A Note About Data Storage in Memory:
    - Data stored from the code in RAM (random access memory)
    - Each binary digit is called a bit (1 or 0).
    - 8 Bits grouped together is called a byte.
    - Number systems used to convert between data types and binary code.
Number Systems: Allow to transform human-readable data into computer-readable, and vice versa.
    Base 10: Represents numbers as scalar factors of 10 to some power. (DEC)
        - 2371 = (2 x 10^3) + (3 x 10^2) + (7 x 10^1) + (1 x 10^0)
        - 47 = (4 x 10^1) + (7 x 10^0)
        - etc . . .
    Binary (base 2): (BIN)
        - Made up of 1 or 0
        - Add a "0b" in front for the code.
        - 100101 = (1 x 2^5) + (0 x 2^4) + (0 x 2^3) + (1 x 2^2) + (0 x 2^1) + (1 x 2^0)    ---> Base 10 equivalent: 37
        - 10010 = (1 x 2^4) + (0 x 2^3) + (0 x 2^2) + (1 x 2^1) + (0 x 2^0)   ---> Base 10 equivalent: 18
        - 111 = (1 x 2^2) + (1 x 2^1) + (1 x 2^0)   ---> Base 10 equivalent: 7
    00000 = 0            1 digit to represent 0-1
    00001 = 1            2 digits represent 0-3 numbers
    00010 = 2            3 digits to represent numbers up to 7
    00011 = 3
    00100 = 4            4 diigits (bits) to represent numbers uo tp 15
    00101 = 5
    00110 = 6            5 digits (bits) can represent numbers up to 31
    00111 = 7
    01000 = 8            
    01001 = 9
    01010 = 10          8 bits can represent numbers up to 255
    01011 = 11
    01100 = 12
    01101 = 13
    01110 = 14          16 bits can represent numbers up to 65,535
    01111 = 15
    10000 = 16          32 bits can represent numbers up to 34,359,738,367
    10001 = 17
    10010 = 18          64 bits can represent numbers up to 18,446,744,073,709,551,615
    10011 = 19          n bits can represent numbers up to 2^n - 1
    . . . etc.
    Hexadecimal System (HEX) [Base 16]: Can be used to shorten the length of a binary numbers. Groups binary digits into sets of 4. A "0x" is added in front to represent hexadecimal.
        - ex:  BIN (0b00101) = DEC(5) = HEX(0x5)
    Octal System (OCT) [Base 8]: Divides bits into groups of three. Has a base of 8.
        - 437 --> 64ths place: 4, 8th's place: 3, 1's place: 7 ---> = 4x64 + 3x8 + 7x1
        - Add a "0" in front for the code.
    BIN     DEC      HEX    OCT
    00000    0        0      0
    00001    1        1      1
    00010    2        2      2
    00011    3        3      3
    00100    4        4      4
    00101    5        5      5
    00110    6        6      6
    00111    7        7      7
    01000    8        8      10
    01001    9        9      11
    01010    10       A      12
    01011    11       B      13
    01100    12       C      14
    01101    13       D      15
    01110    14       E      16
    01111    15       F      17
    10000    16       10     20
    10001    17       11     21
    10010    18       12     22
    10011    19       13     23 
    10100    20       14     24
    10101    21       15     25 
    10110    22       16     26
    19111    23       17     27
    11000    24       18     30
    11001    25       19     31
    11010    26       1A     32
    11011    27       1B     33
    11100    28       1C     34
        Padding: If a set of bits do not evenly fit into sets of 4 or 3, the extra digit is "Padded" with zeroes.
            - Bits are compiled from right to left
*/


int main(){

    int dec1 = 15;      // Decimal
    int oct1 = 017;     // Octal
    int hex1 = 0x0f;    // Hexadecimal
    int bin1 = 0b00001111;   // Binary

    std::cout << "number 1 is: " << dec1 << std::endl;
    std::cout << "number 2 is: " << oct1 << std::endl;
    std::cout << "number 3 is: " << hex1 << std::endl;
    std::cout << "number 4 is: " << bin1 << std::endl;
        // Output prints out "15" for each number.
    return 0;

}
