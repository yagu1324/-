#include<iostream>
#include<vector>
using namespace std;

int M, N;
bool map[50][50];

// 상하좌우 이동을 위한 배열
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void dfs(int x, int y) {
    // 현재 위치를 방문했으므로 false로 변경
    map[y][x] = false;

    // 상하좌우 네 방향 탐색
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // 배열의 경계를 벗어나는지 확인
        if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
            // 인접한 위치에 배추가 있으면 재귀 호출
            if (map[ny][nx]) {
                dfs(nx, ny);
            }
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int K;
        cin >> M >> N >> K;

        // map 배열 초기화
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                map[i][j] = false;
            }
        }

        // 배추 위치 입력
        for (int i = 0; i < K; i++) {
            int x, y;
            cin >> x >> y;
            map[y][x] = true;
        }

        int warm = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (map[i][j]) {
                    warm++;
                    dfs(j, i);
                }
            }
        }
        cout << warm << "\n";
    }
    return 0;
}
