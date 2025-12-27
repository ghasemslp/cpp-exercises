#include <iostream>
using namespace std;
int main(){
    int Number1,Number2;
    cout << "Please enter the first number: ";
    cin >> Number1;
    cout << "Please enter the second number: ";
    cin >> Number2;
    if (Number1 > Number2) {
        cout << Number1 << " It is a bigger number.";
        }
    else if (Number1 < Number2) {
        cout << Number2 << " It is a bigger number.";
        }
    else {
        cout << "Both numbers are equal.";
        }
    return 0;
    }

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp