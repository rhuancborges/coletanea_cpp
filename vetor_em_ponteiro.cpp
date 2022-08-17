#include <iostream>
using namespace std;

void troca(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int* inverte(int *vetor, int ini, int fim){
	for (int i = ini; i < fim; i++)
		troca(vetor[i], vetor[fim-i]);
	return vetor;
}

int main(){
	int tamanho, trecho_ini,trecho_fim,num;
	cin >> tamanho;
	int *vetor[tamanho];
	for (int j=0; j<tamanho; j++){
		cin >> num;
		*vetor[j]=num;
	}
	cin >> trecho_ini >> trecho_fim;
	*vetor = inverte(vetor, trecho_ini, trecho_fim);
	for (int j=0;j<tamanho;j++){
		cout << vetor[j] << " ";
	}
	return 0;
}
