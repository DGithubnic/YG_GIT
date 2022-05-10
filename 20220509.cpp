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

	cout << "얼마만큼 입력을 받으시겠습니까?: ";
	cin >> Size;
	int* Arr = new int[Size];   // 사이즈 확정

	for (int i = 0; i < Size; i++)
	{
		cout << i + 1 << "번째 정수 입력: ";
		cin >> Arr[i];
	}

	Sort(Arr, Size);   // 정렬

	for (int i = 0; i < Size; i++)
	{
		cout << Arr[i] << " ";
	}

	cout << endl;
	cout << "합계: " << ArraySum(Arr, Size) << endl;   // 배열 자체를 전달(배열은 자체가 포인터)

	delete[] Arr;   // delete 꼭 해줘야 함.

	return 0;
}