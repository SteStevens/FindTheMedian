/*Programmer: Stephanie Stevens
Program: Find the median
Purpose: To find the median
Start Date: 9/10/18
End Date: 9/17/18
*/

//libraries
#include <iostream>
using namespace std;

//Function declaration
double getMedian(int*, int);


int main()
{
	//Variables
	int size;

	//Ask the user for info
	cout << "How many numbers will you be entering: ";
	cin >> size;

	//set the loop to count and add the user data into the array
	int* ptrNum = new int[size];
	for (int count = 0; count < size; count++)
	{
		cout << "Please enter number " << count + 1 << " : ";
		//Make the data entered in the array convert to a pointer
		cin >> *(ptrNum + count); 
	}

	//call the function to handle what number sits in the median array
	double median = getMedian(ptrNum, size);
	cout << "The number in the array median is :" << median << endl << endl;

	//reset the pointer & array values
	delete[] ptrNum;
	ptrNum = 0;

	system("pause");
	return 0;
}

//The median function to return the median through the pointer
double getMedian(int* numbers, int size)
{
	//declare variables used
	double median;

	//If the array is an even number
	if (size % 2 == 0)
	{
		median = (*(numbers + (size / 2)) + *(numbers + (size / 2 - 1))) / 2;
	}

	//If the array is an odd number
	else
	{
		median = *(numbers + ((size - 1) / 2));
	}

	//Send the data back
	return median;
}
