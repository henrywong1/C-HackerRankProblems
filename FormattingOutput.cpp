#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
    /* Enter your code here */
    cout << setw(0) << "0x" << nouppercase << hex << (long) A << endl;
    cout << right << setfill('_') << setw(15) << showpos << fixed << setprecision(2) 
    << B << endl;
    cout << noshowpos << setprecision(9) << scientific << uppercase << C << endl;
  }
  return 0;
}
