#include <vector>
#include <iostream>
using namespace std;

void InsertionSort( vector<int>& Vector);
void PrintVector(const vector<int>& Vector);

int main()
{
	vector<int> UnSortedVector{ 5,6,23,7,53,23,1,34,134,32,23,34,4,234,234,219,56 ,76 ,-1,0};

	InsertionSort(UnSortedVector);
	PrintVector(UnSortedVector);
	


	return 0;
}

void InsertionSort(vector<int>& Vector)
{
	unsigned int SortedIndex = 1;

	while(SortedIndex < Vector.size())
	{
		for(int i = SortedIndex; i > 0; i--)
		{
			if (Vector[i] < Vector[i - 1])
			{
				int temp = Vector[i];
				Vector[i] = Vector[i - 1];
				Vector[i - 1] = temp;
			}
			else
			{
				break;
			}
		}

		SortedIndex++;
	}
}
void PrintVector(const vector<int>& Vector)
{
	for (int item : Vector)
		cout << item << " ";
}
