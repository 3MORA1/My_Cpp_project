#include<iomanip>/////"My initial logic failed here"
#include<iostream>
#include<cmath>                                  
using namespace std;
int main() {
	long long n; cin >> n; long long x, y;
	x = pow(5,n); y = pow(5,(n-2));
	if (n >= 2) {
		cout << x/y << endl;
	
	}
}

////"Here my correction"
#include <iostream>
using namespace std;

int main() {
    long long n;
    if (!(cin >> n)) return 0; // تأمين الإدخال

    // مهما كان الرقم كبير، آخر رقمين من 5 أس أي حاجة هم 25
    if (n >= 2) {
        cout << 25 << endl;
    } else if (n == 1) {
        cout << 5 << endl; // لو n بـ 1 الناتج 5
    } else {
        cout << 1 << endl; // لو n بـ 0 الناتج 1
    }

    return 0;
}
