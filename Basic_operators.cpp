// ANTARLEEN CHAND
// 24070123018 | ENTC A1 

#include <iostream>
using namespace std;

int main() {
    int a = 7;  // Binary: 0111
    int b = 8;  // Binary: 1000

   
    int bitwise_AND    = a & b;
    int bitwise_OR     = a | b;
    int bitwise_XOR    = a ^ b;
    int bitwise_NOT    = ~b;
    int bitwise_LSHIFT = b << 2;
    int bitwise_RSHIFT = a >> 1;

    cout << "Bitwise AND (a & b)       = " << bitwise_AND << endl;
    cout << "Bitwise OR  (a | b)       = " << bitwise_OR << endl;
    cout << "Bitwise XOR (a ^ b)       = " << bitwise_XOR << endl;
    cout << "Bitwise NOT (~b)          = " << bitwise_NOT << endl;
    cout << "Left Shift  (b << 2)      = " << bitwise_LSHIFT << endl;
    cout << "Right Shift (a >> 1)      = " << bitwise_RSHIFT << endl;

    return 0;
}

/*
Output:

Bitwise AND (a & b)       = 0
Bitwise OR  (a | b)       = 15
Bitwise XOR (a ^ b)       = 15
Bitwise NOT (~b)          = -9
Left Shift  (b << 2)      = 32
Right Shift (a >> 1)      = 3

--- End of Program ---
*/
