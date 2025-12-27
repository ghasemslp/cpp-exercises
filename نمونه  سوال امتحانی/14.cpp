#include <iostream>
using namespace std;
int main(){
    int Number , j , Sum = 0;
    cout << "Please enter a number: ";
    cin >> Number;
    j = Number;
    if (Number < 0) {
        Number = -Number;}
    while(Number > 0){
        Sum += Number %10;
        Number /= 10;}
    
    cout << "The sum of the digits of the number " << j <<" is " << Sum;
    return 0;
    }

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp