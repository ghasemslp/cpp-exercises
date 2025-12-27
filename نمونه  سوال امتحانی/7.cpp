#include <iostream>
using namespace std;
int main(){
    int Number;
    cout << "Please enter a number: ";
    cin >> Number;
    while (Number >= 0) {
        if (Number %2 == 0){
            cout << Number << endl;
        }
        Number--;
    }
    return 0;
    }
    
// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp