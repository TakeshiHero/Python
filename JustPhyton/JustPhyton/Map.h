#pragma once
#include <string>
#include <vector>
#include <windows.h>
using namespace std;

class Map {
public:
	int Map[20][20];

	void SpawnMap() {
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {
				if (i == 0 || i == 19 || j == 0 || j == 19) {
					Map[i][j] = 1;
				}
				else {
					Map[i][j] = 0;
				}
			}
		}
	}

	void RenderMap() {
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {
				if (Map[i][j] == 1) {
					Sleep(35);
					cout << "#";
				}
				else if (Map[i][j] == 0) {
					cout << " ";
				}
			}
			cout << endl;
		}
	}


/*	void SpawnMap() {
		int i = 20 / 2, j = 20 / 2, Food = rand() % 10, Food2 = rand() % 10;

		for (int x = 0; x < 20; x++) {
			for (int y = 0; y < 20; y++) {
				if (x == 0 || y == 0 || x == 20 - 1 || y == 20 - 1) {
					Sleep(35);
					cout << "# ";
				}
				else {
					cout << "  ";
				}
				if (x == Food && y == Food2) {
					cout << "F";
				}
			}
			cout << endl;
		}
	}*/
};