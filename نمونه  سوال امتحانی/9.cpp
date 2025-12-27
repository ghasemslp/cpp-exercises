#include <iostream>
using namespace std;
int main(){
    int Number , Sum=0;
    cout << "Please enter a number: ";
    cin >> Number;
    while ( Number > 1) {
        if (Number %2 != 0) {
            cout << Sum << " + " << Number << " = " << Sum + Number << endl;
            Sum += Number;
        }
        Number--;
    }
    return 0;
    }

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp