#include <iostream>

/*
- 'new' operator allocates dynamic memory from the heap, and is referenced by the pointer. The operator rarely fails, but the program will crash if it does.
Solutions:
    - Through exception mechanism
    - std::nowthrow setting

*/

int main(){
// Simulating memory allocation failures:

// New failure crash due to exceeding array size:
/*
int *integers{new int[10000000000000000000]};
*/


// Instead, use a loop to try to exhaust memory capabilities of the system.
/*
for (size_t i{}; i < 10000000000000000000; i++){
    int *integers2{new int[100000000]};
}
*/
//  .\main.exe terminate called after throwing an instance of 'std::bad_alloc' what():  std::bad_alloc

// Exception mechanism: 
for (size_t i{}; i < 1000000000000; ++i){
    try{
        int* integers3 {new int [10000000000]};
    }catch(std::exception& ex){
        std::cout << "Caught exception ourselves : " << ex.what() << std::endl;     //std::bad_alloc
    }
}

// std::nothrow: ideal if you do not want exceptions thrown when new fails.
for (size_t i{}; i < 10000000000000; ++i){
    int *integers4 {new (std::nothrow) int [100000000]};
    if(integers4 == nullptr){
        std::cout << "Memory allocation failure" << std::endl;
    }else{
        std::cout << "Memory allocation succeeded" << std::endl;
    }
}
return 0;

}
