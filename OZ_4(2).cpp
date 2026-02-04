#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	if ((n % m == 0) || (m % n == 0)) {
		cout << "zds";
	}
	else {
		do {
			cout << "Bed" << endl;
			cin >> n >> m;
		} while (!(n % m == 0) && !(m % n == 0));
		cout << "zds";
	}
	return 0;
}