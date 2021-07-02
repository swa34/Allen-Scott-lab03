#include <iostream>
#include "arrayutil.h"
#include <vector>

using namespace std;
/*Function to print an array with brackets
 * and commas*/
void printArray(int arr[], int length) {
  cout << "{";
  for (int i = 0; i < length; ++i) {
	cout << arr[i];
	if (i != length - 1)
	  cout << ", ";
  }
  cout << "}";
  cout << endl;
}

/* Main method */
int main() {
  cout << "To auto populate array by size enter 1:  \nTo manually input elements by size enter 2: ";

  int choice;
  cin >> choice;

  if (choice == 1) {
	int sizeArray;
	cout << "Enter the size of array: ";
	cin >> sizeArray;
/*generates random numbers for the array*/
	int *randArray = new int[sizeArray];
	/*Had to look this one up!*/
	for (int i = 0; i < sizeArray; i++) {
	  randArray[i] = (rand() % 100) + 1;
	}//for
	int i;
	cout << "Array contents: ";
	printArray(randArray, sizeArray);
	cout << "Max value is: " << getMax(randArray, sizeArray) << endl;
	cout << "The mean is: " << getMean(randArray, sizeArray) << endl;
	cout << "The variance is: " << getVar(randArray, sizeArray) << endl;
	cout << "The sort is: ";
	sortArray(randArray, sizeArray);
  } else if (choice == 2) {
	int sizeArray, numberArray;
	cout << "Enter the size of array: " << "\n";
	cin >> numberArray;
	int *arr = new int(numberArray);
	cout << "Enter " << numberArray << " elements with spaces" << endl;
	for (sizeArray = 0; sizeArray < numberArray; sizeArray++) {
	  cin >> arr[sizeArray];
	  vector<int> vec;
	  vec.push_back(sizeArray);
	  int array = vec.size();
	  vector<int> arr[array];
	}
	cout << "Array contents: ";
	printArray(arr, sizeArray);
	cout << "Max value is: " << getMax(arr, sizeArray) << endl;
	cout << "The mean is: " << getMean(arr, sizeArray) << endl;
	cout << "The variance is: " << getVar(arr, sizeArray) << endl;
	cout << "The sort is: ";
	sortArray(arr, sizeArray);

  }
  return 0;
}






