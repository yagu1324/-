#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<string> a;
	vector<int> b;
	for (int i = 0; i < n; i++) {
		int as;
		string st;
		cin >> as; // 반복갯수
		cin >> st; //문자열
		b.push_back(as);
		a.push_back(st);
	}
	for (int i = 0; i < n; i++) { // 전채 갯수만 큼 반복
		for (int j = 0; j < a[i].length(); j++) {// 문자열 길이만큼 반복
			for (int z = 0; z < b[i]; z++) { // 적은 갯수만큼 반복
				cout << a[i].substr(j, 1);
			}
		}
		cout << endl;
	}
}
