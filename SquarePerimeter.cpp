// کتابخانه i/o => input/output
#include <iostream>

// کتابخانه برای پشتیبانی متن فارسی در ویندوز 
#include <windows.h>

// کتابخانه standard برای ساده سازی استفاد از std
using namespace std ;

// تابع اصلی / خروجی یک عدد است
int main (){

    // تنظیم کد صفحه برای UTF-8
    SetConsoleOutputCP(65001);

    // (تعریف متغییر (ساخت ظرف برای قرار دادن محتوا درون آن
    int user_input , Perimeter ;
    // راهنمایی کاربر برای دادن ورودی
    cout << "یک ضلع از چهار ضلع مربع را وارد کنید : " ;
    //  دریافت ورودی و قرار دادن در ظرف user_input
    cin  >> user_input ;
    //  محاسبه محیط مربع => n * 4
    //  قرار دادن مقدار محاسبه شده در ظرف نهایی 
    Perimeter = user_input * 4 ;
    //  نمایش خروجی به کاربر
    cout << "محیط مربع شما => " << Perimeter ;
  
    // اگر در محسابات بالا خروجی به صورت عدد نبود return 0 از ارور تابع جلوگیری میکند
    return 0;

}


// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp
