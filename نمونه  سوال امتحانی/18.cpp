#include <iostream>
using namespace std;
int main() {
    int n;
    
    cout << "Please enter a number: ";
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << j << " ";
        }
        cout<<endl;
    }    
    return 0;
}

// ساخته شده توسط 
// instagram = Ghasem_slp
// GitHub = Ghasemslp