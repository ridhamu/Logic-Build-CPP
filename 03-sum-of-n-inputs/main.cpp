#include <iostream>

using namespace std;

int main(){

	int n;
	int i = 1; 
	int sum = 0; 
	int val; 

	//read n
	cout << "masukkan nilai N: "; 
	cin >> n; 

	//looping section 
	while(i <= n){
		cout << "Masukkan nilai yang ingin di tambahkan: ";
		cin >> val; 
		sum = sum + val; 
		i++;
	}

	cout << "total: " << sum << endl;

	return 0;
}
