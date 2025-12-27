#include <iostream>
using namespace std;
int main() {
    int Number, J ,reversed = 0;
    cout << "Please enter a number: ";
    cin >> Number;
    J = Number;
    while (Number != 0) {
        reversed = reversed * 10 + (Number % 10);
        Number = Number / 10;}
    
    cout << "The inverse of the number " << J << " is " << reversed;
    return 0;
}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp