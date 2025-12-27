#include <iostream>
using namespace std;

int main() {
    int Number, i;
    cout << "Enter a Number: ";
    cin >> Number;
    if (Number <= 0) {
        cout <<"!Error: Number cannot be zero or less than zero.";}
    else {
        if (Number == 1) {
            cout << Number << " is a prime Number";}
        else {
            for (i = 2; i <= Number / 2; i++) {
                if (Number % i == 0) {
                    break;}}
            if (i > Number / 2) {
                cout << Number << " is a prime Number";}
            else {
                cout << Number << " is not a prime Number";}}}
    return 0;
}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp