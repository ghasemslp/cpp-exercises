#include <iostream>
using namespace std;
int main(){
    // ساعت : ورودی کاربر 
    float Hour;
    cout << "Saet Chand Ast? ";
    cin >> Hour;
    // ساعت بین 1 تا 24 است
    if (Hour > 0 && Hour <= 24){
        // جواب سیستم
        if (Hour > 4 && Hour < 12) {
            cout << "Sahar Khiz Shodi Sheyton.";
        }else if (Hour >= 12 && Hour < 17) {
            cout << "Aftab khobe?";
        }else if (Hour >= 17 && Hour < 20) {
            cout << "Dare Shab Mishe(:"; 
        }else{
            cout << "Bekhab Teryaki";
        }}
    else {
        cout << "Mashti Bi Savadi?";
    }
    return 0;

}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp