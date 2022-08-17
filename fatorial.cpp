#include <iostream>
using namespace std;

int main(){
	int num, fat;
	do{
		fat=1;
		cin >> num;
		if (num!=1){
			while (num>=1){
				fat *= num;
				num--;
			}
			cout << fat << endl;
		}
	}while(num!=1);
	return 0;
}
