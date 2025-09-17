#include <iostream>
#include <queue>
using namespace std;
int main() {
	queue<int> q; // int 형 큐

	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		q.push(i);
	}

	while (q.size() != 1) { // 카드가 한장 남을 때 까지
		q.pop(); // 맨 첫 번째 카드 삭제
		q.push(q.front()); // 그 다음 첫번 쨰 카드를 맨 뒤로 복사
		q.pop();//복사한 맨 앞의 카드 삭제
	}
	cout << q.front();
}
