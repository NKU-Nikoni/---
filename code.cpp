/* Max Sub Sequence Sum 最大子序列和*/
/*在线算法实现*/
/*时间复杂度 O(N)*/

#include<iostream>
using namespace std;
int f(const int A[], int N) //N>=2;
{
	int sum=0, maxsum=0;
	for (int i = 0; i < N; i++)
	{
		sum += A[i];
		if (sum > maxsum)
			maxsum = sum;
		if (sum < 0)
			sum == 0;
	}
	return maxsum;
}

int main()//test
{
	int N;
	cin >> N;
	int *A = new int[N];

	
	for (int i = 0; i < N; i++)
		cin >> A[i];
	cout << f(A, N) << endl;

	delete A;
}
