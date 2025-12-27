#include <iostream>
using namespace std;
int main(){
    int Next_Number = 1 , New_Number = 1;
    while(New_Number < 51 ){
        cout << Next_Number << " + " << New_Number << " = " << Next_Number + New_Number << endl;
        Next_Number += New_Number;
        New_Number++;
    }

    return 0;
    }

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp