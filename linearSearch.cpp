#include <bits/stdc++.h>
using namespace std;

int linearSearch(int array[], int length, int target){

	for (int i = 0; i < length; ++i)
	{
		if(array[i]==target){
			return i;
		}
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	int array[] = {1,2,3,4,5,6,7};
	int pos = linearSearch(array, 7, 8);

	if(pos > 0) {
		cout << "Number found in: " << pos;
	} else {
		cout << "404 - Number not found";
	}
	return 0;
}