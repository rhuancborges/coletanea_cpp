#include <iostream>
using namespace std;

int main(){
	
	// Consertar esse código para divisões não exatas com n1>n2
	int n1, n2, c=0, quant=0;
	cin >> n1 >> n2;
	while (c<n1){
		if (n1>=n2){
		quant++;
		}
		c += n2;
	}
	cout << quant;
	return 0;
}
