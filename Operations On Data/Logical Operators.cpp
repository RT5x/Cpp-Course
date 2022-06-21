#include <iostream>

/*
Logical Operators:
    - Works on boolean operands
    - Allows comparison using logical operators.


    AND (&&) operator:
        - Both conditions a AND b must be true for the AND statement to be true (t).
        - A single false will make the entire expression false.

        a       b       a&&b
        --------------------
        f       f       f
        f       t       f
        t       f       f
        t       t       t

    OR (||) operator:
        - Evaluates to true if a OR b is true (any one)
        - Only ever false if both a and b are false.

        a       b       a||b
        --------------------
        f       f       f
        f       t       t
        t       f       t
        t       t       t


    NOT (!) operator:
        - Negates whatever the input is.

        a         !a
        -------------
        f          t
        t          f

*/

int main(){

bool a {true};
bool b {false};
bool c {true};

std::cout << std::boolalpha;     // Outputs t/f instead of 1/0
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl;
std::cout << "c: " << c << std::endl;
std::cout << std::endl;
std::cout << "Basic AND operations: " << std::endl;

std::cout << "a AND b: " << (a && b) << std::endl;      // true && false --> false
std::cout << "a AND c: " << (a && c) << std::endl;      // true && true --> true
std::cout << "a AND b AND c: " << (a && b && c) << std::endl;       // (true && false) && true --> false && true --> false
std::cout << std::endl;
std::cout << "Basic OR operations: " << std::endl;
std::cout << "a OR b: " << (a || b) << std::endl;   // true || false --> true
std::cout << "a OR c: " << (a || c) << std::endl;       // true || true --> true
std::cout << "a OR b OR c: " << (a || b || c) << std::endl;     // (true || false) || true  --> true || true --> true
std::cout << "b OR c: " << (b || c) << std::endl;   // false || true --> true

std::cout << std::endl;
std::cout << "Basic NOT operations: " << std::endl;
std::cout << "NOT a: " << (!a) << std::endl;        // !true --> false
std::cout << "NOT b: " << (!b) << std::endl;        // !false --> true

// Combining logical operators
std::cout << "!(a && b) || c : " << (!(a && b) || c) << std::endl;
std::cout << std::endl;
// !( true && false) || true  -->  !(false) || true --> true || true  --> true

// Combining logical + relational operators into expressions:
int d{45};
int e{20};
int f{11};
std::cout << std::endl;
std::cout <<"===== Relational and logical operators on integers =====" << std::endl;
std::cout << "d: " << d << std::endl;
std::cout << "e: " << e << std::endl;
std::cout << "f: " << f << std::endl;
std::cout << std::endl;

std::cout << "(d > e) && (d > f): " << ((d > e) && (d > f)) << std::endl;
// (45 > 20) AND (45 > 11) ---> true AND true --> true
std::cout << "(d==e) || (e <= f): " << ((d==e) || (e <= f)) << std::endl;
// (45 == 20) || (20 <= 11) --> (false) || (false) --> false
std::cout << "(d < e) || (d > f): " << ((d < e) || (d > f)) << std::endl;
// (45 < 20) || (45 > 11) --> f || t --> true
std::cout << "(f > e) || (d < f): " << ((f > e) || (d < f)) << std::endl;
// (11 > 20) || (45 < 11) --> false || false --> false
std::cout << "(d > f) && (f <= d): " << ((d > f) && (f <= d)) << std::endl;
// (45 > 20) AND ( 11 <= 45) --> true && true --> true
std::cout << "(d > e) && (d <= f): " << ((d > e) && (d <= f)) << std::endl;
// (45 > 20) && (45 <= 11) --> true && false --> false
std::cout << "(!a) && (d==e): " << ((!a) && (d==e)) << std::endl;
// (!45) && (45 == 20) --> false

return 0;
}
