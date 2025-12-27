#include <iostream>
using namespace std;
int main(){
    int Number , len , max = 0;
    cout << "Please enter a number: ";
    cin >> Number;
    if(Number < 0){
        Number = -Number;}
    while (Number > 0) {
        len = Number %10;
        if(Number %10 > max){
            max = len;}
        Number = Number /10;}
    cout << max << endl;
    return 0;
}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp