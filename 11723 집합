#include<iostream>
using namespace std;
int main() {
	// 입출력 속도 향상을 위한 필수 코드
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	bool S[21];// 집합크기 
	//bool로 한 이유 : true = 값이 있음!, false = 값이 없음!

	//공집합으로 초기화
	for (int i = 0; i < 21; i++) {
		S[i] = false;
	}

	int ocase;//계산횟수
	cin >> ocase;
	for (int i = 0; i < ocase; i++) {
		string oper; // 연산자
		int operand; // 피연산자
		cin >> oper; // 연산자 입력
		if (oper == "all") { // 모두 참
			for (int i = 0; i < 21; i++) {
				S[i] = true;
			}
			continue;
		}
		else if (oper == "empty") { //모두 비우기
			for (int i = 0; i < 21; i++) {
				S[i] = false;
			}
			continue;
		}

		cin >> operand; // 피연산자 입력
		if (oper == "add") { //값 추가
			if (!S[operand]) { // 값이 없을 경우
				S[operand] = true;
			}
		}
		else if (oper == "remove") {//값 삭제
			if (S[operand]) { // 값이 있을 경우
				S[operand] = false;
			}
		}
		else if (oper == "check") {//있는지 없는지 확인
			if (S[operand]) { //값이 있을경우
				cout << "1\n" ;
			}
			else {//값이 없을 경우
				cout << "0\n";
			}
		}
		else if (oper == "toggle") {//있으면 삭제, 없으면 추가
			if (S[operand]) {//값이 true
				S[operand] = false;
			}
			else {//값이 false
				S[operand] = true;
			}
		}
	}
}
