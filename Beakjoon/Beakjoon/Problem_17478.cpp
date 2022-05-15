#include "Problem_17478.h"

#include <iostream>
#include <vector>
#include <array>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std;

/*	----------------------------
	�׽�Ʈ�뵵�� �õ���
	- ���ڿ� üũ�� ������.
---------------------------- */

int maxCount = 0;

void CountLine(int count, const char* str)
{
	for (int i = 0; i < count; ++i) {
		cout << "____";
	}
	cout << str << endl;
}

void Rec_Function(int count)
{
	CountLine(count, "\"����Լ��� ������?\"");
	if (count == maxCount) {
		CountLine(count, "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"");
		return;
	}

	CountLine(count, "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.");
	CountLine(count, "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.");
	CountLine(count, "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"");

	Rec_Function(++count);

	CountLine(count, "��� �亯�Ͽ���.");
}

int Problem_17478::Flush()
{
	cin >> maxCount;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
	Rec_Function(0);
	cout << "��� �亯�Ͽ���." << endl;

	return 0;
}

