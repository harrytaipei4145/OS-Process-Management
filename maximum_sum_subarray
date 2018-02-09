#include <iostream>
using namespace std;
int find(int a[], int size){

	
	

	int maxsum = 0;
	int current = 0;

	for (int i = 0; i < size; i++){
		current = current + a[i];
	
		if (current > maxsum){
			maxsum = current;
		}

		if (current < 0){
			
			current = 0;
		}
	}
	return maxsum;
}

int main()
{
	int count = 0;
	int number[10000];
	int max_sum = 0;
	while (!cin.fail())
	{
		cin >> number[count];
		count++;
	}
	count = count - 1;

	max_sum = find(number,  count);
	cout << max_sum;
	system("pause");
}

