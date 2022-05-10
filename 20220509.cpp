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

	cout << "얼마만큼 입력을 받으시겠습니까?: ";
	cin >> Size;
	int* Arr = new int[Size];

	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << "번째 정수 입력: ";
		cin >> Arr[i];
	}

	cout << "합계: " << Sum(Arr, Size) << endl;

	return 0;
}