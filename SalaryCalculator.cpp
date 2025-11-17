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

    // ساخت متغییر
    // workTime => ساعت کار یک روز
    // Daily_working_hours => ساعت کار 30 روز
    // One_month_salary => دستمزد یک ماه
    int workTime,Daily_working_hours,One_month_salary;
    // راهنمای کاربر برای دادن ورودی 
    cout << "ساعت کارکرد را وارد کنید : ";
    // دریافت ساعت کار یک روز از کاربر
    cin >> workTime;
    // ساعت کار نباید عددی منفی و یا بیشتر از 16 ساع باشد
    if(workTime >= 0 && workTime <= 15){
        // محاسبه ساعت کار یک ماه => ساعت کار یک روز  * 30
        Daily_working_hours = workTime * 30;
        // محاسبه دستمز یک ماه => ساعت کار یک ماه * 10 هزارتومان
        One_month_salary = Daily_working_hours * 10;
        // نشان دادن خروجی 
        cout << "شما در ماه " << Daily_working_hours << " ساعت کار کردید و دستمزد اضافه کاری ماهانه شما " << One_month_salary << " هزارتومان است.";
        // شرط برای عدد های اشتباه
    }else {
    cout << "ساعت کاری نمیتواند منفی باشد یا بیشتر از 15 ساعت باشد.";
    }

    // اگر در محسابات بالا خروجی به صورت عدد نبود return 0 از ارور تابع جلوگیری میکند
    return 0;
}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp
