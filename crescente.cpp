#include <iostream>
using namespace std;

int main(){
	int n1,n2,n3;
	cin >> n1 >> n2 >> n3;
	if (n1 > n2 and n1 > n3){
		 cout << "O maior número é " << n1;
	}
	if (n2 > n1 and n2 > n3){
		 cout << "O maior número é " << n2;
	}
	if (n3 > n2 and n3 > n1){
		cout << "O maior número é " << n3;
	}
	return 0;
}
