#include <iostream>
using namespace std;

int main (){
	int numero;
	cin >> numero;
	if (numero%2==0){
		cout << "O número " << numero << " é par!\n";
	}
	cout << "fora do if";
	return 0;
}