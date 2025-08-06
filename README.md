# BitwiseOP_CPP

**✅ Experiment 4A: Bitwise Operators**
AIM: To write a C++ program demonstrating the use of bitwise operators: AND, OR, XOR, NOT, left shift, and right shift.

THEORY: Bitwise operators are used to perform operations directly on the binary representations of integers:

& (AND): Sets each bit to 1 if both bits are 1.
| (OR): Sets each bit to 1 if one of two bits is 1.
^ (XOR): Sets each bit to 1 if only one of the two bits is 1.
~ (NOT): Inverts all bits.
<< (Left Shift): Shifts bits to the left, effectively multiplying by 2ⁿ.
>> (Right Shift): Shifts bits to the right, dividing by 2ⁿ (ignores remainder).
Example: For a = 7 (0111) and b = 8 (1000), the various bitwise results illustrate how binary manipulation can yield different integer values.

CONCLUSION: The program successfully demonstrated all common bitwise operations. This experiment improved understanding of how data is stored and manipulated at the binary level — which is essential in low-level programming, optimization, and embedded systems.

**✅ Experiment 4B: Toggle a Specific Bit in an Integer**
AIM: To write a C++ program that toggles a specific bit of an integer entered by the user.

THEORY: To toggle (flip) a specific bit in an integer:

Use the XOR (^) operator with a mask having a 1 at the desired position.
The mask is created by shifting 1 left by (position - 1) places.
Formula:

toggled = number ^ (1 << (position - 1));
This approach uses bit manipulation to change a 0 to 1 or 1 to 0 without affecting other bits.

CONCLUSION: The program worked accurately and efficiently toggled the specified bit in the input number. This experiment demonstrated how powerful and precise bit-level operations can be when dealing with low-level data manipulation and memory-efficient coding techniques.
