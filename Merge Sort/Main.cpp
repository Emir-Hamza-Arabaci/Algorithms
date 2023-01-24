#include <vector>
#include <iostream>

using namespace std;
vector<int> Merge(vector<int>& A, vector<int>& B);
void PrintVector(vector<int>& Vector);
vector<int> MergeSort(const vector<int>& UnsortedVector);
int main()
{
	vector<int> UnsortedVector{ 1,4,2,68,22,12,23,1,25,1344,21,57 };
	vector<int >Temp = MergeSort(UnsortedVector);
	PrintVector(Temp);
	return 0;
}


vector<int> Merge(vector<int>& A, vector<int>& B)
{
	int IndexA = 0, IndexB = 0;
	vector<int> Result;

	while(IndexA < A.size() && IndexB < B.size())
	{
		if (A[IndexA] < B[IndexB])
		{
			Result.push_back(A[IndexA]);
			IndexA++;
		}
		else
		{
			Result.push_back(B[IndexB]);
			IndexB++;
		}
	}

	while (IndexA < A.size())
	{
		Result.push_back(A[IndexA]);
		IndexA++;
	}

	while(IndexB < B.size())
	{
		Result.push_back(B[IndexB]);
		IndexB++;
	}


	return Result;

}
vector<int> MergeSort(const vector<int>& UnsortedVector)
{
	if (UnsortedVector.size() == 1)
		return UnsortedVector;

	vector<int> VectorA(UnsortedVector.begin(), UnsortedVector.begin() + UnsortedVector.size() / 2);
	vector<int> VectorB(UnsortedVector.begin() + UnsortedVector.size() / 2, UnsortedVector.end());

	VectorA = MergeSort(VectorA);
	VectorB = MergeSort(VectorB);

	return Merge(VectorA, VectorB);


}
void PrintVector(vector<int>& Vector)
{
	for (int item : Vector)
		cout << item << " ";
}