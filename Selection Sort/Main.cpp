#include <vector>
#include <iostream>
using namespace std;

void SelectionSort(vector<int>& UnsortedVector);
void PrintVector(vector<int>& Vector);
int main()					
{
	vector<int> UnSortedVector{ 3,1,2,4,45,45,32,6587,32,348,21,884,4590,32,12,321 };
	SelectionSort(UnSortedVector);
	PrintVector(UnSortedVector);

	return 0;

}

void SelectionSort(vector<int>& UnsortedVector)
{
	unsigned int BeginIndex = 0;

	while(BeginIndex < UnsortedVector.size())
	{
		int MinIndex = UnsortedVector.size()-1;
		int Index = BeginIndex;

		for (;Index < UnsortedVector.size(); Index++)
			if (UnsortedVector[Index] < UnsortedVector[MinIndex])
				MinIndex = Index;
		
		int Temp = UnsortedVector[MinIndex];
		UnsortedVector[MinIndex] = UnsortedVector[BeginIndex];
		UnsortedVector[BeginIndex] = Temp;

		BeginIndex++;
	}
}
void PrintVector(vector<int>& Vector)
{
	for (int item : Vector)
		cout << item << " ";
}