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
