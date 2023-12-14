#include <iostream>


typedef int I ;

using namespace std;


int main(){


	I N;

	cout << " Masukkan N : ";
	cin >> N;

	I i = 1;

	while(i<=N){

		I spaces = 1; 
		while(spaces <= (N-i)){
			cout << " "; 
			spaces = spaces + 1; 
		}

		I star = 1; 
		while(star<=((2*i)-1)){
			cout << "*";
			star = star + 1; 
		}
		cout << endl;
		i++; 
	}

	return 0;
}
