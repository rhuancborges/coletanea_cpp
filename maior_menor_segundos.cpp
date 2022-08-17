#include <iostream>
using namespace std;

int main(){
	int num, maior=-1, s_maior=-1, menor=1000000,s_menor=1000000;
	do{
		cin >> num;
		if (num>=0){
			if (num>maior){
				s_maior=maior;
				maior=num;
			}
			if (num<menor) {
				s_menor=menor;
				menor=num;
			}
			if (num>menor and num<s_menor){                                                      
				s_menor=num;
			}
		}
	}while(num>=0);
	cout << maior << ' ' << s_maior << " ... " << s_menor
			<< ' ' << menor;
	return 0;
}
