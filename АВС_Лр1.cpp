#include <iostream>
#include <string>
using namespace std;
int main() {
    string number;
    int notation; //Система счисления
    int result = 0;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the base (2-16): ";
    cin >> notation;
    for (int i = 0; i < number.length(); i++) {
        char c = number[i]; // Берем текущий символ числа
        int digit;
        if (c >= '0' && c <= '9') // Превращение символа из типа char в int
            digit = c - '0'; 
        else if (c >= 'A' && c <= 'F')
            digit = c - 'A' + 10;
        else if (c >= 'a' && c <= 'f')
            digit = c - 'a' + 10;
        else { // Ошибка в случае неподходящего символа
            cout << "Error!";
            return 1;
        }
        if (digit >= notation) { // Допустимость цифр в данной системе
            cout << "Error: digit does not match the notation!";
            return 1;
        }
        result = result * notation + digit;
    }
    cout << "Decimal number: " << result;
    return 0;
}