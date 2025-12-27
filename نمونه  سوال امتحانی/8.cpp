#include <iostream>
using namespace std;
int main(){
    int Number , j ,i = 0;
    cout << "Please enter a number: ";
    cin >> Number;
    j = Number;
    while (Number > 1) {
        if (Number %2 == 0) {
            i++;
        }
        Number--;
    }
    cout << "There are " << i << " even numbers between 1 and " << j;
    return 0;
    }

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp