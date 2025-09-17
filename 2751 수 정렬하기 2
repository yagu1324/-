#include <iostream>
#include <algorithm> // sort를 위해 필요

using namespace std;

int main() {
    

    int N;
    cin >> N;

    //동적할당
    int* numbers = new int[N];

    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    // 내림차순
    sort(numbers, numbers + N);

    for (int i = 0; i < N; ++i) {
        cout << numbers[i] << '\n';
    }

    
    delete[] numbers; // 메모리 해제

    return 0;
}
