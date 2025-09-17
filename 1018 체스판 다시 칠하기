#include<iostream>
#include<vector>
using namespace std;

string black[8][8] = {
	{"B", "W", "B", "W", "B", "W", "B", "W"},
	{"W", "B", "W", "B", "W", "B", "W", "B"},
	{"B", "W", "B", "W", "B", "W", "B", "W"},
	{"W", "B", "W", "B", "W", "B", "W", "B"},
	{"B", "W", "B", "W", "B", "W", "B", "W"},
	{"W", "B", "W", "B", "W", "B", "W", "B"},
	{"B", "W", "B", "W", "B", "W", "B", "W"},
	{"W", "B", "W", "B", "W", "B", "W", "B"}
};
string white[8][8] = {
	{"W", "B", "W", "B", "W", "B", "W", "B"},
	{"B", "W", "B", "W", "B", "W", "B", "W"},
	{"W", "B", "W", "B", "W", "B", "W", "B"},
	{"B", "W", "B", "W", "B", "W", "B", "W"},
	{"W", "B", "W", "B", "W", "B", "W", "B"},
	{"B", "W", "B", "W", "B", "W", "B", "W"},
	{"W", "B", "W", "B", "W", "B", "W", "B"},
	{"B", "W", "B", "W", "B", "W", "B", "W"}
};
int min(string a[8][8]) {
	int black_sum = 0;
	int white_sum = 0;
	//블랙
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {

			if (a[i][j] != black[i][j]) {
				black_sum++;
			}

		}
	}
	

	//화이트
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {

			if (a[i][j] != white[i][j]) {
				white_sum++;
			}

		}
	}
	
	if (black_sum > white_sum) {
		return white_sum;
	}
	else {
		return black_sum;
	}
}
int main() {
	int x, y; // 맵 크기
	int minn=1000;
	cin >> y >> x;
	vector<vector<string>> arr(y, vector<string>(x)); // 동적할당 받기
	
	string chess[8][8];

	//전체 크기 복사
	string bar;
	for (int i = 0; i < y; i++) {
		cin >> bar;
		for (int j = 0; j < x; j++) {
			arr[i][j] = bar[j];
		}
	}
	
	//단계적으로 비교하기
	for (int yy = 0; yy <= y-8; yy++) { // y값의 크기 차이
		for (int xx = 0; xx <= x-8; xx++) {// x값의 크기 차이
			//체스판 복사
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					chess[i][j] = arr[i+yy][j+xx];
				}
			}
			//최소 값 비교
			if (minn > min(chess)) {
				minn = min(chess);
			}

		}
	}
	cout << minn;
}
