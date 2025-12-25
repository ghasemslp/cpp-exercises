#include <iostream>

using namespace std;

int main() {    

    /*  End  = آخرین ضرب : کاربر مشخص میکند  

       Zarb  =         حاصل ضرب 

       Start =         شروع حلقه             */  

    int Start,Zarb,End;



    cout << "Enter your desired number: ";

    

    // دریافت آخرین عدد از کاربر

    cin >> End;

    

    // تمیز کردن صفحه از محتوای اضافی قدیمی

    // اگر لینوکس استفاده میکنید  => ("clear")

    system("cls");

    if (End > 0) {

        // حلقه شکل گیری جدول ضرب

        for (Start = 1; Start <= End; Start++) {

            // حلقه چاپ حاصل ضرب

            for (Zarb = 1; Zarb <= End; Zarb++) {

                // چاپ ضرب شونده ها و حاصل آنها

                cout << Start << " * "<< Zarb << " = " << Start * Zarb << "\t";

            }

            // فاصله بین خطوط برای تمیزی جدول

            cout << "\n\n";

        }}



    // خطا در صورت وارد کردن اعداد زیر صفر توسط کاربر

    else {

        cout << "!Error: Number cannot be negative. \n\n";

    }

    

    return 0;

}







// ساخته شده توسط 

// instagram = Ghasem_slp

// GitHub = Ghasemslp
