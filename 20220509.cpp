#include <iostream>

using namespace std;

int Sum(int* Sum, int SumNum)
{
	int Result = 0;

	for (int i = 0; i < SumNum; i++)
	{
		Result += Sum[i];
	}

	return Result;
}


int main()
{
	int Size = 10;

	cout << "�󸶸�ŭ �Է��� �����ðڽ��ϱ�?: ";
	cin >> Size;
	int* Arr = new int[Size];

	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << "��° ���� �Է�: ";
		cin >> Arr[i];
	}

	cout << "�հ�: " << Sum(Arr, Size) << endl;

	return 0;
}