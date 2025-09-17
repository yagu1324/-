#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int M, N;
    cin >> M >> N;

    
    int* a = new int[N + 1]; // 소수 = 0, 아니면 = 1

    for (int i = 0; i <= N; ++i) {
        a[i] = 0;
    }


    a[0] = 1;
    a[1] = 1;

   // 에라토스테네스의 체 알고리즘 
    for (int i = 2; i * i <= N; ++i) {
        if (a[i] == 0) {
            
            for (int j = i * i; j <= N; j += i) {
                a[j] = 1;
            }
        }
    }

    for (int i = M; i <= N; ++i) { //출력
        if (a[i] == 0) {
            cout << i << '\n';
        }
    }

   
    delete[] a; //동적할당해제

    return 0;
}
