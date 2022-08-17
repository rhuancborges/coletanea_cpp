#include <iostream>
using namespace std;

void piramide(int n){
	int i=1;
	while (i<=n){
		int letra = 97, j=0;
		while (j<i){
			cout << char(letra+j) << ' ';
			j++;
		}
		cout << ' ' << endl;
		i++;
	}
}


int main(){
	int n;
	cin >> n;
	piramide(n);
	return 0;
}
