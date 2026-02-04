#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a = sqrt(99);
	for (int i = 1; i <= 32; i++) {
		a = sqrt(3 * (33 - i) + a);
	}
	cout << a;
}
