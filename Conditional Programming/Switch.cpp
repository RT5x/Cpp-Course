#include <iostream>

/*


Switch Statement: An alternative way to testing several different conditions.
    - Uses a set of cases followed by break.
    - Goes through each case in the function until a true case is reached, and the switch block is terminated.
    - Includes a default block that executes if none of the cases are true.

*/

// Variables:
const int val1 {10};
const int val2 {20};
const int val3 {30};
const int val4 {40};
const int val5 {50};
const int val6 {60};



switch (value){     // value can only be an integral type and enum (int, long, unsigned short, etc.)
    case val1: {
        std::cout << "Variable 1 is chosen" << std::endl;
    }
    break;      /* Break statement stops processing the switch block after a successful case has been found. 
                         Prevents all other cases being executed following the first case */
    case val2: {
        std::cout << "Variable 2 is chosen" << std::endl;
    }
    break;
       case val3: {
        std::cout << "Variable 3 is chosen" << std::endl;
    }
    break; 
    case val4: {
        std::cout << "Variable 4 is chosen" << std::endl;
    }
    break;
        case val5: {
        std::cout << "Variable 5 is chosen" << std::endl;
    }
    break;
        case val6: {
        std::cout << "Variable 6 is chosen" << std::endl;
    }
    break;
    default: {      // Executes when none of the above cases are met.
        std::cout << "Can't match any variables" << std::endl;
    }

}

return 0;
}
