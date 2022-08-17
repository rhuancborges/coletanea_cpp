#include <iostream>
using namespace std;

float paraCM (float dist){
	 float resultado = dist*100.0;
	 return resultado;
}

float paraM (float dist){
	float resultado =  dist/100.0;
	return resultado;
}

int main(){
	float dist;
	string unidade;
	cin >> dist >> unidade;
	if (unidade=="centimetro"){
		cout << paraCM(dist) << " cm";
	} else if (unidade == "metro"){
		cout << paraM(dist) << " m";
	} else {
		cout << "ERRO";
	}
	return 0;
}
