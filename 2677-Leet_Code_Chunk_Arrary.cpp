
//chunk array

#include <iostream>
using namespace std;

int main()
{
	//input array
	int arr[] = { 1,9,6,3,2 };
	int array_length = 5;
	int chunk_size = 3;

	int index = 0;


	//loop till all elements are processed

	while (index < array_length)
	{
		cout << " ";

		//print one chunk
		for (int count = 0; count < chunk_size && index < array_length; count++)
		{
			cout << arr[index] << " ";
			index++;
		}
		cout << "] ";
	}
	return 0;

}

