#include <iostream>
using namespace std;

int main() {
	int n, a = 0;
	int count = 0;
	cin >> n;
	a = n;
	while (true) {
		a = 10 * (a % 10) + ((a / 10) + (a % 10)) % 10;
		count++;
		if (a == n)
			break;
	}
	cout << count;
}

// �Ӹ������� �����ص� ����ε� ���ؿ����� �޸��ʰ��� �ȵ�....
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//	vector<int> answer;
//	int s=0;
//	int count = 0;
//	if (N == 0)
//		count = 1;
//	else if (N < 10) {
//		answer.push_back(0);
//		answer.push_back(N);
//	}
//	else {
//		answer.push_back(N / 10);
//		answer.push_back(N % 10);
//	}
//
//	while (N != s) {
//		int n = answer.back() + answer[answer.size() - 2];
//		if (n > 10)
//			answer.push_back(n % 10);
//		else
//			answer.push_back(n);
//
//		if (answer[answer.size() - 2] == 10)
//			s = answer.back();
//		else
//			s = 10 * answer[answer.size() - 2] + answer.back();
//		count++;
//	}
//	cout << count;
//}
