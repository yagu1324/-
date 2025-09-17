#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int map[1000][1000]; // 초반에 입력받는 맵
int mmm[1000][1000]; // 출력용

int zerox;//초기값
int zeroy;//초기값
void q(int x,int y) {
	int s=0,xx=0,yy=0; //s = 순서 / xx= 지금 x 좌표 / yy= 지금 y좌표

	queue<int> mx;
	queue<int> my;
	mx.push(zerox);
	my.push(zeroy);
	mmm[zeroy][zerox] = s;
	
	int movex[4] = { 1,-1,0,0 };
	int movey[4] = { 0,0,1,-1 };
	while (!mx.empty() && !my.empty()) {
		s++; //순서값 증가
		int size = mx.size(); // mx.size는 계쏙 값이 바뀜
		for (int i = 0; i < size; i++) { //들어온 갯수만큼
			xx = mx.front(); // 지금 x 좌표
			yy = my.front(); // 지금 y좌표
			
			//큐에서 제거
			mx.pop();
			my.pop();

			for (int j = 0; j < 4; j++) { //상하 좌우 이동
				//   이고 가는곳이 0이면 가능
				if (xx + movex[j] < x && //0<x<xx
					xx + movex[j]>=0 && 
					yy + movey[j] < y && //0<y<yy
					yy + movey[j]>=0&&
					mmm[yy + movey[j]][xx + movex[j]]==-1&&//가는곳이 -1이 아니면 가능
					map[yy + movey[j]][xx + movex[j]]==1) {//입력받은 맵이 1이면 가능
					
					mx.push(xx + movex[j]);//x값 푸시
					my.push(yy + movey[j]);//y값 푸시
					mmm[yy + movey[j]][xx + movex[j]] = s;//번호 입력
				}
			}
		}
	}
}
int main() {
	int x, y,a;
	cin >> y >> x;
	for (int i = 0; i < y; i++) { // 처음 그림그리기
		for (int j = 0; j < x; j++) {
			cin >> a;
			if (a == 2) {
				zerox = j;
				zeroy = i;
				map[i][j] = a;
				mmm[i][j] = 0;

			}
			else {
				map[i][j] = a;
				mmm[i][j] = -1;// -1로 초기화
			}
			
		}
	}
	q(x, y);
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			if (map[i][j] == 0) { //map 상 0이면 그냥 벽
				cout << "0 ";
				continue;
			}
			cout << mmm[i][j]<<" ";// 출력
		}
		cout << "\n";
	}
}
