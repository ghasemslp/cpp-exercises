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
    // user_Height => قد کاربر
    // inch => اینچ
    float user_Height , inch ;
    // راهنمای کاربر برای دادن ورودی
    cout << "قد خود را وارد کنید: ";
    // دریافت قد
    cin >> user_Height;
    // قد نمیتواند صفر و یا منفی باشد
    if (user_Height > 0) {
        // محسابه تبدیل قد به اینچ => n * 0.3937
        inch = user_Height * 0.3937;
        // نمایش خروجی
        cout << "قد شما به اینچ : " << inch;
    } else {
        // نمایش ارور در صورت دادن عدد 0 و یا منفی
    cout << "قد نمیتواند 0 و یا منفی باشد";
    }
    
    // اگر در محسابات بالا خروجی به صورت عدد نبود return 0 از ارور تابع جلوگیری میکند
    return 0;
}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp
