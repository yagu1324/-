// 10773
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int a;
    cin >> a;
    stack<int> s;

    for (int i = 0; i < a; ++i) {
        int number;
        cin >> number;

        if (number == 0) {
            s.pop();
        }
        else {
            s.push(number);
        }
    }

    int sum = 0;
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }

    cout << sum << '\n';

    return 0;
}
