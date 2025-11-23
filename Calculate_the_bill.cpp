#include <iostream>
using namespace std;
int main(){
    int call,sms, ghabz;
    cout << "Saet Mokalme Ra Vard Konid: ";
    cin >> call;
    cout << "Tedad Payamk Haie Ersal Shode Ra Vard Konid: ";
    cin >> sms;
    ghabz = (((call * 60) * 20)+(sms * 2)) *1000;
    cout << "Ghabz Shoma = " << ghabz;
    return 0;
    
}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp
