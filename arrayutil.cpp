#include <iostream>
using namespace std;

int getMax(int arr[], int length) {
  int i;
  int max = arr[0];
  for (i = 1; i < length; i++)
	if (arr[i] > max)
	  max = arr[i];
  return max;
}//getMax

double getMean(int arr[], int length) {
  double ans = 0;
  for (int i = 0; i < length; ++i) {
	ans += arr[i];
  }
  return ans / length;
}//getMean

double getVar(int arr[], int length) {

  double sqDiff = 0;
  for (auto i = 0; i < length; i++)
	sqDiff += (arr[i] - getMean(arr, length)) * (arr[i] - getMean(arr, length));
  return sqDiff / length;

}//getVar

void sortArray (int arr[], int length)
{
  int i, j, min, temp;
  for (i = 0; i < length - 1; i++) {
	min = i;
	for (j = i + 1; j < length; j++)
	  if (arr[j] < arr[min])
		min = j;
	temp = arr[i];
	arr[i] = arr[min];
	arr[min] = temp;
  }
  cout << "{";
  for(int i = 0;i < length; ++i)
  {

	cout  << arr[i] ;
	if (i != length-1)
	  cout <<", ";

  }
  cout << "}";
  cout << endl;
}//sortArray



