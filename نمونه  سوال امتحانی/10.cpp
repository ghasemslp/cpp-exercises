#include <iostream>
using namespace std;
int main() {    
    /*  Number  =  ورودی کاربر    
          Zarb  =  حاصل ضرب     */
    int Zarb,Number;
    cout << "Enter your desired number: ";
    // دریافت آخرین عدد از کاربر
    cin >> Number;
    if (Number > 0) {
        // حلقه شکل گیری جدول ضرب
        for (Zarb = 1; Zarb <= 10; Zarb++) {
            // چاپ ضرب شونده ها و حاصل آنها
            cout << Number << " * "<< Zarb << " = " << Number * Zarb << endl;}}
    // خطا در صورت وارد کردن اعداد زیر صفر توسط کاربر
    else {
        cout << "!Error: Number cannot be negative.";}
    return 0;
}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp