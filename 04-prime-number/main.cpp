#include <iostream>

using namespace std;


int searchPrime(int a){
	int i = 2;
	int out = 1; 

	while(i<a){
		if(a%i==0){
			out = i;
			break;
		}
		i++;
	}

	return out;	
}

void inputNumber(){
	int N, checker;

	cout << "===YPPA(yg prima prima ajahhhhh)===" << endl;
	cout << "mana nih angka yg mau dicek:  ";
	cin >> N;

	checker = searchPrime(N);

	if(checker != 1){
		cout << N << " yaelah deh ini mah bukan primma ";
		cout << "nih divisor-nya ada : " <<  checker << endl;
	}else{
		cout << N << " ya iyalah ini mah jelas-jelas prima bree!" << endl;
	}

}

int main(){

	inputNumber();
	return 0;
}
