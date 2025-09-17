#include<iostream>
using namespace std;
int blue = 0, white = 0;
int map[128][128]; //그림판 1=blue, 0=white
bool block_check(int x, int y, int size);
void check(int x,int y,int size) {
	if (block_check(x, y, size)) {
		
		if (map[y][x] == 1) {
			blue++;
		}
		else {
			white++;
		}
		return;
	}
	size /= 2; // 크기 자르기
	check(x, y, size);
	check(x+size, y, size);
	check(x, y+size, size);
	check(x+size, y+size, size);
}
bool block_check(int x, int y, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (map[y][x] != map[y + i][x + j]) { // 다를경우
				return false;
			}
		}
	}
	return true; //다 같은 경우
}
int main() {
	int ocase; //맵 크기
	cin >> ocase;

	int a;
	//입력받기
	for (int i = 0; i < ocase; i++) {
		for (int j = 0; j < ocase; j++) {
			cin >> a;
			map[i][j] = a;
		}
	}
	check(0, 0, ocase);
	cout << white << "\n" << blue;
}
