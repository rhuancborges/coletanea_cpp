#include <iostream>
using namespace std;

int somat (int n){
	int i=1, somat=0;
	while (i<=n){
		somat += 5*i*i + 2*i + 8;
		i++;
	}
	return somat;
}


int main(){
	int n;
	cin >> n;
	cout << somat(n);
	return 0;
}
