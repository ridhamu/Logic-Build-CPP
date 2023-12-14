#include <iostream>

using namespace std;


double numberLogic(double a, double b, double c){
	double largest;

	// using ternary operator logic
	largest = (a>=b) ? a : b;
	largest = (largest >= c) ? largest : c; 

	//===if else logic ====
	// if(a>=b and a>=c){
	// 	largest = a; 
	// }
	// if(b>=a and b>=c){
	// 	largest = b; 
	// }else {
	// 	largest = c; 
	// }

	return largest;
}

void largestNUmber(){
	double a, b, c;
	cout << "masukkan nilai a: ";
	cin >> a; 
	cout << "masukkan nilai b: ";
	cin >> b; 
	cout << "masukkan nilai c: ";
	cin >> c; 

	cout << "largest number is: " << numberLogic(a,b,c) << endl;

}

int main(){

	largestNUmber();

	cin.get();
	return 0;
}
