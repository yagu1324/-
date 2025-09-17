#include<iostream>
#include<vector>
using namespace std;
class computer { //컴퓨터 클래스
public:
	vector<int> connect; //연결된 컴퓨터 확인용
};
bool vir_com[100] = { false }; // true = 감염, false = 비감염
vector<computer> compu; // 컴퓨터 동적할당
void vir_check(int s) {
	for (int i = 0; i < compu[s].connect.size(); i++) { // 연결된 커넥션 갯수만큼 반복
		
		if (!vir_com[compu[s].connect[i]]) { // 만약 감염된 컴퓨터가 true 가 아닐경우 실행
			vir_com[compu[s].connect[i]] = true;
			vir_check(compu[s].connect[i]); // 재귀
		}
		
	}
	return;
}

int main() {
	int cnt = 0;
	
	int com; //컴퓨터 수
	int con; //연결된 수

	cin >> com;
	cin >> con;

	for (int i = 0; i < com; i++) { // 입력받은 컴퓨터 갯수만큼 증식
		computer a;
		compu.push_back(a);
	}

	//노드 입력
	int x, y;
	for (int i = 0; i < con; i++) {
		cin >> x >> y;
		compu[x-1].connect.push_back(y-1);
		compu[y-1].connect.push_back(x-1);
	}
	vir_com[0] = true;
	vir_check(0);// 0번째 = 첫번쨰 컴퓨터를 지칭
	for (int i = 0; i < com; i++) {
		if (vir_com[i]) { // 감염되었을 경우
			cnt++;
		}
		
	}
	cout << cnt-1;
}
