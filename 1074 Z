#include<iostream>
#include <cmath>
using namespace std;
int z = 0;
void rect(int a, int b, int c) { // a = 2의 지수 b=행 c=열
	if (a == 0) {
		return;
	}
	if (b < pow(2, a)/2&&c<pow(2,a)/2) {//맨 왼쪽 위
		rect(a - 1, b, c);
	}
	else if (b < pow(2, a) / 2 && c >= pow(2, a)/2) {//오른쪽 위
		z += (pow(2, a) * pow(2, a) / 4) * 1;
		rect(a - 1, b, c-(pow(2,a)/2));
	}
	else if (b >= pow(2, a) / 2 && c < pow(2, a)/2) {//왼쪽 아래
		z += (pow(2, a) * pow(2, a) / 4) * 2;
		rect(a - 1, b-(pow(2, a) / 2), c);
	}
	else if (b >= pow(2, a) / 2 && c >= pow(2, a)/2) {//오른쪽 아래
		z += (pow(2, a) * pow(2, a) / 4) * 3;
		rect(a - 1, b- (pow(2, a) / 2), c- (pow(2, a) / 2));
	}
}
int main() {
	int a, b, c; // a = 크기? b=행 c=열
	cin >> a >> b >> c;
	rect(a, b, c);
	cout << z;
	
}
