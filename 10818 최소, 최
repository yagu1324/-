#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> max;
	int n;
	cin >> n; // 숫자 갯수
	int s;
	int mx, min;
	for (int i = 0; i < n; i++) {// 값 저장
		cin >> s;
		max.push_back(s);
	}
	for (int i = 0; i < n; i++) { // 최댓값
		if (i == 0) {
			mx = max[i];
		}
		if (mx < max[i]) {
			mx = max[i];
		}
	}
	for (int i = 0; i < n; i++) {// 최솟값
		if (i == 0) {
			min = max[i];
		}
		if (min > max[i]) {
			min = max[i];
		}
	}
	cout << min << " " << mx;
}
