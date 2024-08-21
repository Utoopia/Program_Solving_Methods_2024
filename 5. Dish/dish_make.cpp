#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#define endl '\n'
using namespace std;

ifstream fin("dish.inp");
ofstream fout("dish.out");

vector <char> v;

int main() {
	int T, N;

	cin >> T;

	for (int i = 0; i < T; i++) {
		int height = 0;
		char temp = ' ';
		cin >> N;
		for (int j = 0; j < N; j++) {
			char dish;
			
			cin >> dish;

			cout << temp << dish << endl;
			if ((int)dish == temp) { height += 5; }
			else {
				height += 10;
				temp = (int)dish;
			}
		}
		cout << height << endl;
	}
	
	

	return 0;
}