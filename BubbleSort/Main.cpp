
#include <vector>
#include <iostream>

using namespace std;

void BubbleSort(vector<int>& UnsortedVector);
void PrintVector(const vector<int>& Vector);

int main()
{
	vector<int> UnsortedVector{ 1,2,56,23,2,78,54,32,1023,123 };
	BubbleSort(UnsortedVector);
	PrintVector(UnsortedVector);
	return 0;
}

void BubbleSort(vector<int>& UnsortedVector)
{
	
	for(int Counter = UnsortedVector.size()-1; Counter > 0; Counter--)
	{
		for(int i = 0; i < Counter; i++)
		{
			if (UnsortedVector[i] > UnsortedVector[i + 1])
			{
				int Temp = UnsortedVector[i];
				UnsortedVector[i] = UnsortedVector[i + 1];
				UnsortedVector[i + 1] = Temp;
			}
		}
	}
}

void PrintVector(const vector<int>& Vector)
{
	for (int item : Vector)
		cout << item << " ";
}