#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float x1,x2,y1,y2, dist;
	cin >> x1 >> y1 >> x2 >> y2;
	dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	/*cout.precision(4);
	cout.setf(ios::fixed);*/
	cout << dist;
	return 0;
}
