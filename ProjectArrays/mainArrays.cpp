#include<iostream>
using namespace std;

#define TAB "\t"
#define REVERSE_ARRAY
#define SUM_AND_AVG
#define MAX_AND_MIN_VALUE_ARRAY
#define SHIFT_ARRAY
#define PAUSE system("pause");

void main()
{
	//Array initialization:
	const int SIZE_ARRAY = 10;
	int array[SIZE_ARRAY] = { 1,2,3,4,5,6,7,8,9,10 };

	//Entering values from the keyboard:
	cout << "Enter 10 values array: ";
	for (int i = 0; i < SIZE_ARRAY; i++) cin >> array[i];
	cout << endl;

	//Outputting an array to the screen:
	cout << "Your array: ";
	for (int i = 0; i < SIZE_ARRAY; i++) cout << array[i] << TAB;

#ifdef REVERSE_ARRAY
	cout << "\n\n" << "Let's reverse array..." << "\n\n";
	PAUSE;

	//We suggest the user to display the inverse array:
	cout << "\n" << "Your reverse array: ";
	for (int i = SIZE_ARRAY - 1; i >= 0; i--) cout << array[i] << TAB;
#endif // REVERSE_ARRAY


#ifdef SUM_AND_AVG
	cout << "\n\n" << "Let's do some simple arithmetic operations..." << "\n\n";
	PAUSE;

	int sumArrayValues = 0;
	for (int i = 0; i < SIZE_ARRAY; i++)
	{
		sumArrayValues += array[i];
	}
	cout << "\n" << "The sum of all array values is: " << sumArrayValues << endl;
	cout << "The arithmetic mean of all values in the array is: " << (float)sumArrayValues / SIZE_ARRAY << endl;
#endif // SUM_AND_AVG


#ifdef MAX_AND_MIN_VALUE_ARRAY
	cout << "\n" << "And something else..." << "\n\n";
	PAUSE;

	//We display the sum of all variables and the arithmetic mean:
	int maxArrayValue = array[0];
	int minArrayValue = array[0];
	for (int i = 0; i < SIZE_ARRAY; i++)
	{
		if (array[i] > maxArrayValue) maxArrayValue = array[i];
		if (array[i] < minArrayValue) minArrayValue = array[i];
	}
	cout << "\n" << "The maximum value in the presented array: " << maxArrayValue << endl;
	cout << "The minimum value in the presented array: " << minArrayValue << endl;
#endif // MAX_AND_MIN_VALUE_ARRAY


#ifdef SHIFT_ARRAY
	cout << "\n" << "And the most interesting..." << "\n\n";
	PAUSE;

	//Display the shifts of the array values:
	int number_of_shifts;
	cout << "How many positions do you want to shift the array: "; cin >> number_of_shifts;
	char direction; //Direction of shift
	cout << "Which direction do you want to shift the array in? (l - left, r - right): "; cin >> direction;
	switch (direction)
	{
	case 'l': //Shift array to the left:
		for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = array[0];
			for (int i = 0; i < SIZE_ARRAY; i++)
			{
				array[i] = array[i + 1];

			}
			array[SIZE_ARRAY - 1] = buffer;
		}
		break;
	case 'r': //Shift array to the right:
		for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = array[SIZE_ARRAY - 1];
			for (int i = SIZE_ARRAY - 1; i >= 0; i--)
			{
				array[i] = array[i - 1];
			}
			array[0] = buffer;
		}
	}
	//Outputting a shifted array to the screen:
	for (int i = 0; i < SIZE_ARRAY; i++)
	{
		cout << array[i] << TAB;
	}
	cout << endl;
#endif // SHIFT_ARRAY
	cout << "\n\n" << "THANK YOU FOR WATCHING! We will wait for you again!" << "\n\n\n" << endl;
}