#include <iostream>
using namespace std;

int main(){
	int numero;
	cin >> numero;
	if (numero%2==0 and numero%7==0){
		cout << "O número " << numero << " é par e múltiplo de 7";
	}
	return 0;
}
