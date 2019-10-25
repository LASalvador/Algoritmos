#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int primos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}; 

int binarySearch(int array[], int tamanho,int target)
{	
	int min = 0;
	int max = tamanho - 1;
	int guess;
	while(min <= max)
	{
		guess = (min + max)/2;
		if(array[guess] == target)
		{
			return guess;
		}
		else if(array[guess] < target){
			min = guess + 1;
		}
		else {
			max = guess - 1;
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{	
	int numero;
	cin >> numero;

	int resultado = binarySearch(primos,24,numero);

	cout << "Found prime at index: " << resultado << "\n";

	return 0;
}