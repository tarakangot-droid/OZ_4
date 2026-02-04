#include <iostream>
using namespace std;
void rrr() {
	int c = 1, c1=0, i = 1;
	do {
		i++;
		c1 = c * i;
		c = c1;
	} while (i < 10);
	cout << c1 << endl;
}
void rr() {
	int d=1, d1, i=1;
	while (i < 10) {
		i++;
		d1 = d * i;
		d = d1;
	}
	cout << d1 << endl;
}
int main()
{
	int a=1,a1;
	for (int i = 1; i <=10 ; i++) {
		a1 = a * i;
		a = a1;
	}
	cout <<a1<< endl;
	rr();
	rrr();
}

