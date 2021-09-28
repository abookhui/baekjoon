#include<iostream>

using namespace std;

int a, b, c, n;

int main() {

	
	cin >> a >> b >> n;
	
	while (n--) {
		a %= b;
		a *= 10;
		c = a / b;
	}

	cout << c << '\n';
	
}