# include <bits/stdc++.h>
using namespace std;

int swap(int array[], int firstIndex, int secondIndex)
{
    int temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
}
int bubbleSort(int array[], int tamanho) {
    for (int i = 0; i < tamanho; ++i)
    {
    	if(array[i] > array[i+1]) {
    		swap(array, i, i+1);
    	}
    }
}
int main() {
	int array[] = {22, 11, 99, 88, 9, 7, 42};
	int tam = 7;
	cout << "Before" << "\n";

	for (int i = 0; i < tam; ++i)
	{
		cout << array[i] << ",";
	}
	cout << "\n";

	bubbleSort(array, tam);

	cout << "After" << "\n";
	for (int i = 0; i < tam; ++i)
	{
		cout << array[i] << ",";
	}
	cout << "\n";
}