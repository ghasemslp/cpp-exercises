#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    
    cout << "Please enter a number: ";
    cin >> n;
    
    // جمع مقسوم علیه‌ها (به جز خود عدد)
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    
    if (sum == n) {
        cout << n << " is a whole number";
    } else {
        cout << n << " is not a whole number";
    }
    
    return 0;
}

/*
---------------------------------------|
نوشته شده با هوش مصنوعی دیپ سیک     |
خودم الگوریتمشو بلد نبودم                 |
درواقع مفهوم عدد کامل رو بلد نبودم         |
--------------------------------------|

instagram = Ghasem_slp
GitHub = Ghasemslp
*/ 