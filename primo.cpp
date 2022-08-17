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
	int c=2, soma=0;
	while (c<=n){
		if (primo(c)==1){
			soma += c;
		}
		c++;
	}
	return 
}

int main(){
	int n;
	cin >> n;
	cout << primo(n);
	return 0;
}
