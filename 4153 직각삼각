#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	while (true) {
		int a[3],max=0;//가 세 높
		cin >> a[0]>>a[1]>>a[2]; // 값 입력
		if (a[0] == 0 && a[1] == 0 && a[2] == 0) { //입력이 0 0 0 일경우 정지
			break;
		}

		for (int i = 1; i < 3; i++) { //가장 긴변 알기
			if (a[max] < a[i]) {
				max = i;
			}
		}
		vector<int> extra;
		for (int i = 0; i < 3; i++) { // 긴변을 제외한 나머지변들
			if (i != max) {
				extra.push_back(i);
			}
		}

		if (a[max] * a[max] == a[extra[0]] * a[extra[0]] + a[extra[1]] * a[extra[1]]) {
			cout << "right"<<endl;
		}
		else {
			cout << "wrong"<<endl;
		}
	}
}
