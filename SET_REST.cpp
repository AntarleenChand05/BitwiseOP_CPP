// ANTARLEEN CHAND
// 24070123018 | 18

#include <iostream>
using namespace std;

int main() {
    int position, number;
    cout << "Enter the original number: ";
    cin >> number;

    cout << "Enter the bit position to toggle (1-based index): ";
    cin >> position;

    int toggled = number ^ (1 << (position - 1));

    cout << "Result after toggling bit " << position << " = " << toggled << endl;

    return 0;
}
