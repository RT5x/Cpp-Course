#include <iostream>

/*
Functions: A reusable piece of code that can take a number of inputs and produce some output.
    Functions cannot be declared within other functions.
    Signatures of functions must be unique to each function throughout the program.
*/

    /* Syntax:
    return_type function1 (param1, param2);{
            // operations
        return return_type;
    }
    */
    void funct1(){ // Void signifies that the function does not return anything
        return;
    }

// Function with no args but returns output
int number(){
    return 92;
}

// void type (takes in no parameters and returns nothing):
void Hello(){
        std::cout << "Hello\n";
        return;
    }

// Function signature: function name + function parameters

void enter(size_t age){   // function parameters
    if(age >= 18){
        std::cout << "You are " << age << " years old. You may proceed.\n";
    }else{
        std::cout << "You are " << age << " years old. You may not proceed.\n";
    } 
}

int max(int a, int b)
{
    if(a > b){
        std::cout << "The maximum number is " << a << ".\n";
        return a;
    }if(b > a){
        std::cout << "The maximum number is " << b << ".\n";
        return b;
    }else{
        return 0;
    }
}

// Implicit conversions in functions
char d{55};
char e{51};
double f{34.24};
double g{3.15};

int min_number {};

// Argument scope: copies
// Parameters passed are scoped locally in the function, and changes are invisible outside the function scope. 
// What exists in the function are copies of arguments passed to it.
double increment_multiply(double a, double b){
    std::cout << "Inside function:\n";
    std::cout << "a : " << a << "\n";
    std::cout << "b : " << b << "\n";
    double result = (a++) * (b++);
    std::cout << "Outside function:\n";
    std::cout << "a : " << a << "\n";
    std::cout << "b : " << b << "\n";
    return result;
}

double h(3.28);
double i{3.48};
double increment_mult_result = increment_multiply(h,i);

double Gas_pressure(double density, double R, double T, double m_weight){
    return density * R * T / m_weight;
}

// Vector cross product of A x B, with components of i, j and k
double cross_product(double Ai, double Aj, double Ak, double Bi, double Bj, double Bk){
    double i_comp = (Aj * Bk) - (Bj * Ak);
    double j_comp = (Bi * Ak) - (Ai * Bk);
    double k_comp = (Ai * Bj) - (Aj * Bi); 
    
    std::cout << "<" << Ai << "," << Aj << "," << Ak << "> x <" << Bi << "," << Bj << "," << Bk << "> = "<<"("<< i_comp << ")i + (" << j_comp << ")j + (" << k_comp << ")k\n";
    return i_comp;
    return j_comp;
    return k_comp;
}
// Vector dot product of A . B with components of i, j and k
double dot_product(double Ai, double Aj, double Ak, double Bi, double Bj, double Bk){
    double result = (Ai * Bi) + (Aj * Bj) + (Ak * Bk);
    std::cout << "<" << Ai << "," << Aj << "," << Ak << "> . <" << Bi << "," << Bj << "," << Bk << "> = "<< result << "\n";
    return result;
}

int main(int argc, char ** argv){   // Main function, takes in argc and argv
std::cout << "Functions" << std::endl;

    // funct call:
    enter(29);  // function arguments
    enter(15);

  for (size_t i{1}; i < 20; i++)
  {
        enter(i);
  }
    int a{45};
    int b{32};
    int a_value {14};
    int b_value {10};

    int max_number {max(a_value, b_value)};
    std::cout << "max(" << a << "," << b << ") : " << max(a,b) << std::endl;

    double p1 = Gas_pressure(2.286, 8.14, 298, 32);
    std::cout << "Pressure : " << p1 << " atm.\n";

    cross_product(1, 2, 3, 4, 5, 6);
    dot_product(1, 2, 3, 4, 5, 6);
return 0;

}

