/* Programa gerador de uma sequência numérica, dado o primeiro valor da sequência.
	- Padrão da sequência: 
		1) Se n for par, o próximo é a sua metade;
		2) Se n for ímpar, o próximo é o seu triplo adicionado de 1. 
	- Condição de parada: quando n se igualar a 1. */

#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	cout << n << ' ';
	do{
		if (n%2==0){
			n=n/2;
		} else {
			n=3*n+1;
		}
		cout << n << ' ';
	}while(n!=1);
	return 0;
}
