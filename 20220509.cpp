#include <iostream>

using namespace std;

int ArraySum(int* Sum, int SumNum)
{
	int Result = 0;

	for (int i = 0; i < SumNum; i++)
	{
		Result += Sum[i];
	}

	return Result;
}

void Sort(int* Sort, int SortNum)
{
	int Temp = 0;

	for (int i = 0; i < SortNum - 1; i++)
	{
		for (int j = 0; j < SortNum - 1; j++)
		{
			if (Sort[j] > Sort[j + 1])
			{
				Temp = Sort[j];
				Sort[j] = Sort[j + 1];
				Sort[j + 1] = Temp;
				Temp = 0;
			}
		}
	}
}

int main()
{
	int Size = 10;

	cout << "�󸶸�ŭ �Է��� �����ðڽ��ϱ�?: ";
	cin >> Size;
	int* Arr = new int[Size];   // ������ Ȯ��

	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << "��° ���� �Է�: ";
		cin >> Arr[i];
	}

	Sort(Arr, Size);   // ����

	for (int i = 0; i < Size; i++)
	{
		cout << Arr[i] << " ";
	}

	cout << endl;
	cout << "�հ�: " << ArraySum(Arr, Size) << endl;   // �迭 ��ü�� ����(�迭�� ��ü�� ������)

	delete[] Arr;   // delete �� ����� ��.

	return 0;
}