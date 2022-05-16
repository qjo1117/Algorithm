#include "Problem_2447.h"


#include <iostream>
#include <vector>
#include <array>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std;

int maxX = 0;
int maxY = 0;

/* --------------------------------------------
	for�� ��͸� ���� ����
	���� ���������� ���� ���������� ū ������
	�����س��µ� �������.
-------------------------------------------- */

void Recursion_Func(int x, int y, int num)
{
	if ((x / num) % 3 == 1 && (y / num) % 3 == 1) {
		cout << " ";
	}
	else if (num / 3 == 0) {
		cout << "*";
	}
	else {
		Recursion_Func(x, y, num / 3);
	}
}

int Problem_2447::Flush()
{
	cin >> maxX;

	for (int i = 0; i < maxX; ++i) {
		for (int j = 0; j < maxX; ++j) {
			Recursion_Func(i, j, maxX);
		}
		cout << '\n';
	}


	return 0;
}
