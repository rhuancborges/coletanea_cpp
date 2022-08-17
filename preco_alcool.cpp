/* Programa que calcula o preço a ser pago pela quantidade de álcool colocado no veículo:
	- Preço do litro: R$2,90;
	- Desconto para quantidades menores que 20 litros: 3%;
	- Desconto para quantidades maiores que 20 litros: 5%. */

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
