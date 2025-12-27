#include <iostream>
using namespace std;
int main() {
    int User_Number , i , j , aval;
    cout << "Please enter a number: ";
    cin >> User_Number;
    for (i = 2; i < User_Number; i++) {
        aval = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                aval = 0;
                break;}}
        if (aval == 1) {
            cout << i << "   ";}}
    return 0;
}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp