#include <iostream>

// Function declaration (prototype):
int max(int a, int b);
    // Function header appears before main() and before function calls.

int min(int a, int b);

int inc_mult(int a, int b);

int main(int argc, char ** argv){   
    int x {5};
    int y {12};
    int result = max(x,y);
    int result1 = min(x,y);
    std::cout << "max: " << result << "\n";
    std::cout << "min: " << result1 << "\n";

    int result2 = inc_mult(x,y);
    std::cout << "inc_mult result : " << result2 << "\n";
return 0;

}

// Function definition (appears after main())
int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}
int min(int a, int b){
    if(a < b)
        return a;
    else    
        return b;
}
int inc_mult(int a, int b){
    return ((++a) * (++b));
}
