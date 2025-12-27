#include <iostream>
using namespace std;
int main() {
    int Number, j ,Digits = 0;
    cout << "Please enter a number: ";
    cin >> Number;    
    j = Number;
    // مثبت کردن عدد منفی
    if (Number < 0) {
        Number = -Number;}
    do {
        Number = Number / 10;
        Digits++;} 
    while (Number > 0);
    cout << "The number of digits in the number "<< j << " is " << Digits << " number";
    return 0;
}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp