#include <bits/stdc++.h>

using namespace std;
int swap(int array[], int firstIndex, int secondIndex)
{
		int temp = array[firstIndex];
 	   	array[firstIndex] = array[secondIndex];
    	array[secondIndex] = temp;
}
int indexOfMinimum(int array[],int tamanho,int startIndex)
{
	int minValue = array[startIndex];
	int minIndex = startIndex;

	for (int i = minIndex; i < tamanho; ++i)
	{
		if(array[i] < minValue){
			minIndex = i;
			minValue = array[i];
		}
	}
	return minIndex;
}
int selectionSort(int array[],int tamanho){
	int min;
	for (int i = 0; i < tamanho; ++i)
	{
		min = indexOfMinimum(array, tamanho, i);
		swap(array, i, min);
	}
}
int main(int argc, char const *argv[])
{
	int array[] = {22, 11, 99, 88, 9, 7, 42};

	selectionSort(array, 7);

	for (int i = 0; i < 7; ++i)
	{
		cout << array[i] << ',';
	}

	cout << '\n';
	return 0;
}