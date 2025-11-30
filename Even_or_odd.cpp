#include <iostream>
using namespace std;
int main(){
    // user_number =   ورودی کاربر    
    // COUT = تشخیص سیستم 
    float user_number;
    int COUT;

    cout << "Yek Adad Wared Konid: ";
    cin >> user_number;

    // تبدیل عدد فلوت به صحیح
    COUT = static_cast<int>(user_number);
    if (COUT %2 == 0 && COUT != 0)
        cout << "Adad Zoj Ast.";
    else if (COUT %2 != 0 && COUT != 0)
        cout << "Adad Fard Ast.";
    else
        cout << "Adad 0 Ast.";
    return 0;  
}


//  چون شرط های اجرای زیر دستورات شرطی یک خطی است میتوانیم از کروشه {} استفاده نکنیم



// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp