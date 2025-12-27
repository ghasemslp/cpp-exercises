#include <iostream>
using namespace std;
int main() {
    int Number , i;
    cout << "Please enter a number: ";
    cin >> Number;
    for ( i = 1 ; i <= Number ; i++ ) {
        if (Number % i == 0) {
            cout << i << "\t";}}
    
    return 0;
}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp