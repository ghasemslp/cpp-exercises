#include <iostream>
using namespace std;
int main (){
    /*  Money = پول کاربر
       Devist = پول خورد دیویستی
       Panjah = پول خورد پنجاه تومانی
         Do   = پول خورد دو تومانی       */
    int Money , Devist = 0 , Panjah = 0 , Do = 0 ; 
    // دریافت مقدار پول کاربر
    cin >> Money ; 
    
    // کاربر باید عدد بزرگتر از صفر وارد کند
    if(Money > 0){
        // محاسبه مقدار 200 تومانی 
        while (Money >= 200) {
            Money -= 200 ;
            Devist++ ;
        } 
        
        // محاسبه مقدار 50 تومانی
        while (Money >= 50) {
            Money -= 50 ;
            Panjah++ ;
        } 
        
        // محاسبه مقدار 2 تومانی
        while (Money >= 2) {
            Money -= 2 ;
            Do++ ;
        } 
        
        // نمایش خروجی
        cout << Devist << " * 200 = "  << Devist * 200 << endl
            << Panjah << " * 50 = "   << Panjah *  50 << endl
            <<   Do   << " * 2 = "    <<   Do   *   2 << endl

            <<  Devist * 200 << " + " << Panjah * 50 << " + " 
            <<  Do * 2  << " = "
            << (Devist * 200 ) + (Panjah * 50) + (Do * 2); 
        }
    // خطا در صورت مقدار ورودی کاربر منفی بود
    else{
        cout << "DaDash Bedh Kar Mishi Hesab Konam";
    }
}


// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp