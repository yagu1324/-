#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int weight[50], height[50]; // 최대 50명
    for (int i = 0; i < N; i++) {
        cin >> weight[i] >> height[i];
    }

    for (int i = 0; i < N; i++) {
        int rank = 1; // 기본 등수는 1등
        for (int j = 0; j < N; j++) {
            if (i == j) continue; // 자기 자신은 비교 X
            if (weight[j] > weight[i] && height[j] > height[i]) {
                rank++; // 나보다 큰 사람 발견 → 등수 내려감
            }
        }
        cout << rank << " ";
    }
    cout << "\n";

    return 0;
}
