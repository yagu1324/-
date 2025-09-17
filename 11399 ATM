#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> sum;
	
	int ocase;
	cin >> ocase;

	int total=0,time=0;
	for (int i = 0; i < ocase; i++)
	{
		int a;
		cin >> a;
		sum.push_back(a);
	}
	sort(sum.begin(), sum.end()); // 오름차순
	
	for (int i = 0; i < ocase; i++){
		time += sum[i];
		total += time;
	}
	cout << total;
}
