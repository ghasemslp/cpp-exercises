#include <iostream>
using namespace std;
int main (){
    int Number1,Number2;
    cout << "Enter the first number: ";
    cin >> Number1;
    cout << "Enter the second number: ";
    cin >> Number2;
    if (Number1 > Number2) 
        cout << Number1 << " is bigger";
    else if (Number1 < Number2)
        cout << Number2 << " is bigger";
    else
        cout << "Both numbers are equal.";
    return 0;
}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp