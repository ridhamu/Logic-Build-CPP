#include <iostream>

using namespace std;

int main(){

	int P, R, T;

	cout << "===SIMPLE INTEREST===" << endl;
	cout << "insert value of P: "; 
	cin >> P;
	cout << "insert value of R: "; 
	cin >> R;
	cout << "insert value of T: "; 
	cin >> T;

	double SI = (double)(P*R*T)/100;

	cout << "\nSIMPLE INTEREST = " << SI << endl;
	
	cin.get();
	return 0;
}
