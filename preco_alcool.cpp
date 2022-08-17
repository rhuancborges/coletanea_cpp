#include <iostream>
using namespace std;

int main(){
	float litros;
	cin >> litros;
	if (litros<=20){
		cout << litros*2.9*0.97;
	}else{
		cout << litros*2.9*0.95;
	}
	return 0;
}
