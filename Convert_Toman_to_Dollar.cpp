// کتابخانه i/o => input/output
#include <iostream>

// کتابخانه برای پشتیبانی متن فارسی در ویندوز 
#include <ostream>
#include <windows.h>

// کتابخانه standard برای ساده سازی استفاد از std
using namespace std ;

// تابع اصلی / خروجی یک عدد است
int main (){
    // تنظیم کد صفحه برای UTF-8
    SetConsoleOutputCP(65001);
    
    //ساخت متغییر 
    float user_money , rate ,chenage;    
    cout << "مقدار تومان را وارد کنید: ";
    cin >> user_money;
    if (user_money> 0) {
        cout << "نرخ دلار را وارد کنید: ";
        cin >> rate;
        if (rate > 0 ) {
            chenage = user_money / rate;
            cout << "شما با مقدار پول " << user_money << " میتوانید " << chenage << " دلار با نرخ" << rate << " خریداری کنید";
        }else {
        "مقدار نرخ وارد شده نیمتواند صفر و یا کمتر از صفر باشد.";
        }

    }else if (user_money == 0) {
        cout << "مقدار وارد شده صفر است و صفر قابل چنج نیست.";
    }else {
    cout << "مقدار پول وارد شده نمیتواند کتر از صفر باشد";
    }
    return 0;
}
