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
