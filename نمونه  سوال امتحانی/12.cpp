#include <iostream>
using namespace std;
int main(){
    double Number , j ,factorial = 1;
    cout << "Please enter a number: ";
    cin >> Number;
    if(Number > 0){
        for(int i = 1 ; i <= Number ; i++){
            j = factorial;
            factorial *= i;
            cout << j << " * " << i << " = " << factorial << endl ;
        }
    }
    else {
        cout <<"!Error: Number cannot be zero or less than zero.";
        }
        return 0;
    }

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp