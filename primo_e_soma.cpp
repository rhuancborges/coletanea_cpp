#include <iostream>
using namespace std;

int primo(int n){
	int c=2, div=0;
	while (c<n){
		if (n%c==0){
			div ++;
		}
		c++;
	}
	if (div==0){
		return 1;
	} else {
		return 0;
	}
}
int somaPrimo(int n){
	int cont_primo=1, soma=0, cont_valores=2;
	while (cont_primo<=n){
		if (primo(cont_valores)==1){
			soma += cont_valores;
			cont_primo++;
		}
		cont_valores++;
	}
	return soma;
}

int main(){
	int n;
	cin >> n;
	cout << somaPrimo(n);
	return 0;
}
