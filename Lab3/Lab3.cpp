#include "Triad.h"
#include <sstream>
#include <iostream>
using namespace std;

int main() 
{
	auto t = Triad();
	auto q = Triad();
	cin >> t >> q;
	cout << t << q;
	cout << t.getSum();
	cout << endl << "----Triangle----" << endl;
	auto m = Triangle();
	auto n = Triangle();
	cin >> m >> n;
	cout << m << n;
	cout << m.getB() << endl << n.getGamma() << endl << m.getSum() << endl;
	return 0;
}
