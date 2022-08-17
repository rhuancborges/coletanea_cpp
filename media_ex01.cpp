#include <iostream>
using namespace std;

float media (float a, float b){
	float media=(a+b)/2.0;
	return media;
}


int main(){
	float n1, n2;
	cin >> n1 >> n2;
	cout << media(n1,n2);
	return 0;
}
