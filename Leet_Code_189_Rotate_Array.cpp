

#include <iostream>
using namespace std;


int main()
{
	//declare and initialize					
	int numbers[] = { 1,2,3,4,5,6,7 };
	int array_size = 7;
	int rotate_steps = 3;

	//start with step 1 of 3

	for (int step = 1; step <= rotate_steps; step++)
	{
		int last_element = numbers[array_size - 1];

		for (int index = array_size - 1; index > 0; index--)
		{
			numbers[index] = numbers[index - 1];

		}
		numbers[0] = last_element;
	}
	for (int index = 0; index < array_size; index++)
	{
		cout << numbers[index] << " ";

	}

	return 0;
}

