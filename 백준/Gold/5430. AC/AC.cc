#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;
class AC {
public:
	vector<int> test;
	bool reverse = false; //false = 안뒤집힌 상태 true = 뒤집힌 상태
	void rev() { //뒤집기
		reverse = !reverse;
	}
	void del() {//삭제
		if (reverse) {
			test.pop_back();
		}
		else {
			test.erase(test.begin());
		}

	}
};
int main() {
	int t;
	cin >> t;
	string p;// 실행할 함수
	int n;// 배열 값 갯수
	string x;// 배열 값
	queue<string>pp; // 실행할 함수
	queue<AC> ac;// 케이스
	for (int i = 0; i < t; i++) {
		AC sample;
		cin >> p;//함수 입력
		pp.push(p);
		cin >> n;//케이스 갯수
		cin >> x;//값들
		x += " ";
		string num = "";
		for (char c : x) {
			if (isdigit(c)) {
				num += c; // 숫자라면 누적
			}
			else if (!num.empty()) {
				// 숫자 문자열이 끝났을 때 변환
				sample.test.push_back(stoi(num));
				num = "";
			}
		}
		ac.push(sample); //값 넣기
	}

	for (int i = 0; i < t; i++) { //출력
		bool check = false;
		AC sample = ac.front();
		ac.pop();
		string p = pp.front();
		pp.pop();

		for (char c : p) { //함수 실행
			if (c == 'R') {
				sample.rev();
			}
			else if (c == 'D') {
				if (sample.test.empty()) {
					check = true;
					break; // 에러 발생 시 for 루프 즉시 탈출
				}
				sample.del();
			}
		}
		if (check) {
			cout << "error\n";
			continue;
		}

		cout << "[";
		if (!sample.test.empty()) { // 벡터가 비어있지 않을 때만 출력
			if (sample.reverse) { // 뒤집힌 상태라면
				// 맨 뒤 원소부터 거꾸로 출력
				for (int j = sample.test.size() - 1; j >= 0; j--) {
					cout << sample.test[j];
					if (j != 0) { // 마지막 원소가 아니면 쉼표 출력
						cout << ",";
					}
				}
			}
			else { // 원래 상태라면
				// 맨 앞 원소부터 순서대로 출력
				for (int j = 0; j < sample.test.size(); j++) {
					cout << sample.test[j];
					if (j != sample.test.size() - 1) { // 마지막 원소가 아니면 쉼표 출력
						cout << ",";
					}
				}
			}
		}

		cout << "]\n";



	}
}