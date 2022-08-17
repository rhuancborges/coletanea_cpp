/* Programa de preenchimento de um vetor dinâmico. Utilizando alocação dinâmica a cada 5 posições preenchidas, o programa para quando se preenche uma posição com o valor
0 ou um valor negativo. São retornados na tela os valores do vetor, a sua capacidade e a quantidade de realocações que foram necessárias */

#include <iostream>
#include <cstring>
using namespace std;

int* realoca (int *vetor, int &cap){
	int *novo = new int[cap+5];
	memcpy(novo, vetor,cap*sizeof(int));
	cap+=5;
	delete [] vetor;
	vetor=novo;
	return vetor;
}

int main(){
	int *vetor, num, cap=5,i=0;
	vetor = new int[cap];
	do{
		if (i<cap){
			cin >> num;
			vetor[i] = num;
			i++;
		} else {
			vetor = realoca(vetor,cap);
		}
	}while(num>0);
	for (int j=0; j<cap; j++){
		cout << vetor[j] << " ";
	}
	cout << endl << cap << endl << (cap/5)-1;
	return 0;
}
