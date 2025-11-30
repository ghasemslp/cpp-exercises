#include <iostream>
using namespace std;
int main (){
    // user_age = سن کاربر
    int user_age;
    cout << "Sen Khod Ra Wared Konid: ";
    cin  >> user_age;
    // سن نمی تواند منفی باشد
    user_age = 1404 - user_age;
    if (user_age > 0) {
        if (user_age <= 7 ) {
            cout << "Kodak Sal (: ";
        }else if (user_age > 7 && user_age <= 18) {
            cout << "Dad Nazn Sedat Be Amrika Nmirse";
        }else if(user_age > 18 && user_age <= 100){
            cout << " +Level Up " << endl;
            cout << " Sathe Badbakhtie Shoma Afzaish Yaft (:";
        }else {
            //100 سال به بالا باید اشتراک بخرن 
            cout << " Janati ? ";
        }
    }
    else {
        cout << "Bi Savadi? ";
    }
}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp