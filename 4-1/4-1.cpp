
#include"Header.h"



void main() {
	setlocale(LC_ALL, "RU");
	int N;
	cout << "����������,������� �������������� ����� ������������������(N < 10^4):" << endl; cin >> N;
	while (N > pow(10, 4)) {
		cout << "����������,������� �������������� ����� ������������������(N < 10^4):" << endl; cin >> N;
	}
	vector<int> mass;
	for (int i = 0; i < N; i++) mass.push_back(0);

	int n;
	cout << "����������, ������� ����� ������������������(n <= 10^9):" << endl; cin >> n;
	while (n > pow(10, 9)) {
		cout << "����������, ������� ����� ������������������(n <= 10^9):" << endl;
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		int num;
		cout << "����������, ������� ����� ������������������:" << endl; cin >> num;
		int j = num;
		if (mass[j] == 0) {
			mass[j] = 1;
			continue;
		}
		if (mass[j] == 1) {
			mass[j] = 2;
		}
	}


	vector<int> result;

	for (int i = mass.size() - 1; i >= 0; i--) {
		if (mass[i] == 2) {
			result.push_back(i);
		}
	}

	cout << "��� �������� ������:" << endl;

	result.print();
	
	
}