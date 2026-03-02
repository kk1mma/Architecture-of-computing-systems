#include <iostream>
#include <bitset>
#include <cstring>
using namespace std;

int main() {
    float x;
    cout << "Enter number: ";
    cin >> x;

    unsigned int bits;
    memcpy(&bits, &x, sizeof(x));

    cout << "IEEE 754 (binary): " << bitset<32>(bits);
    cout << "IEEE 754 (hex): " << hex << uppercase << bits;

    return 0;
}