#include<iostream>
#include<queue>
using namespace std;
int tomato[1000][1000]; // 입력받을 토마토 밭
int tim = -1; //time 시간임
class tmt {//내가 편해서 쓰는 토마토 클래스
public:
	int x, y;
};
void bfs(int x,int y) {
	
	queue<tmt> tmtp;
	int movex[4] = { 1,-1,0,0 };
	int movey[4] = { 0,0,1,-1 };
	int size=0;
	for (int i = 0; i < y; i++) { // 첫 큐 넣기
		for (int j = 0; j < x; j++) {
			if (tomato[i][j] == 1) {
				//클래스 토마토 생성
				tmt a;
				a.x = j; a.y = i; //값 넣기
				tmtp.push(a);//푸시
			}
		}
	}
	while (!tmtp.empty()) {//빌때까지
		size = tmtp.size();
		tim+=1; // 시간 증가
		for (int i = 0; i < size; i++) {
			tmt t = tmtp.front(); // 값 받기
			tmtp.pop();//삭제
			for (int j = 0; j < 4; j++) {//상하좌우 움직임
				if (t.x + movex[j] >= 0 && t.x + movex[j] < x &&// 0=<t.x<x
					t.y + movey[j] >= 0 && t.y + movey[j] < y &&// 0=<t.y<y
					tomato[t.y + movey[j]][t.x + movex[j]]==0) { // 가는곳이 토마토가 있을경우

					tmt a;
					a.x = t.x + movex[j]; a.y = t.y + movey[j]; //값 넣기
					tmtp.push(a);//푸시
					tomato[t.y + movey[j]][t.x + movex[j]] = 1;
				}
			}
		}
	}
}
bool check(int x, int y) { // 못칠한게 있는지 확인용
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			if (tomato[i][j] == 0) {
				return true;
			}
		}
	}
	return false;
}
int main() {
	int x, y,input;
	cin >> x >> y;//입력받기
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			cin >> input;
			tomato[i][j] = input;
		}
	}
	bfs(x, y); // 
	//출력용
	if (check(x, y)) {
		cout << -1;
	}
	else {
		cout << tim;
	}
}
