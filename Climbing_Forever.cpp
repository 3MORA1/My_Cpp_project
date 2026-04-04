#include<iomanip>//this wrong
#include<iostream>
#include<cmath>                                  
using namespace std;
int main() {
	long long n, a, b;
	cin >> n >> a >> b;
	long long originalsum = (n * (n + 1)) / 2;
	long long finalposition = originalsum - a + b;
	cout << finalposition;
}
		

#include<iomanip>//this also wrong
#include<iostream>
#include<cmath>                                  
using namespace std;
int main() {
	long long n{ 0 }; long long a{ 0 }; long long b{ 0 }; cin >> n >> a >> b;
	long long k{ 0 };k=n / a;
	
	long long originalsum = (n * (n + 1)) / 2;
	long long finalposition = originalsum - a + b;

	cout << (0.5 * (n * n + n - a * k * k - a * k + 2 * b * k + k * k - k));
}


#include<iomanip>//this also wrong
#include<iostream>
#include<cmath>                                  
using namespace std;
int main() {
	long long n; long long a; long long b; cin >> n >> a >> b;
	long long k;k=n / a;
	
	

	cout << (0.5 * (n * n + n - a * k * k - a * k + 2 * b * k + k * k - k));
}

//"THIS IS THE RIGHT PROGRAM "
#include<iomanip>
#include<iostream>
#include<cmath>                                  
using namespace std;
int main() {
	long long n; long long a; long long b; cin >> n >> a >> b;
	long long k;k=n / a;
	
	

	cout << ((n * n + n - a * k * k - a * k + 2 * b * k + k * k - k)/2);
}
