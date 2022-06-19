#include <iostream>

/*
    Output:

        - std::cout: Prints data to the console
        - std::cin: Reads data from terminal.
        - std::cer: Prints errors to the console.
        - std::clog: Prints log messages to the console.

*/





int main(){
    std::cout << "Hello World" << std::endl;

    //Error
    std::cerr << "std::cerr output : Something went wrong" << std::endl;

    //Log message
    std::clog << "std::clog output : This is a log message" << std::endl;



    int age; 
    std::string name;

    std::cout << "Please type your name : " << std::endl; //Puts data int the terminal.
    std::cin >> name; //gets data from the terminal, and brings it into the program. Stores it in a variable, name.

    std::cout << "Please type in your age : " << std::endl;
    std::cin >> age; //User inputs data, code stores it into a variable age.

    std::cout << "Hello " << name << "! You are " << age << "years old!" << std::endl;

    //Chaining std::cin :

        int number;
        std::string color;

        std::cout << "Please type in your color and number, separated by spaces " << std::endl;
        std::cin >> color >> number; //Can request both of these at the same time with chaining
        std::cout << "Your color is " << color << " and your number is " << number << std::endl;


    return 0;

}


