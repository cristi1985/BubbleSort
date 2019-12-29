
#include "stdafx.h"
#include <iostream>
using namespace std;



int *vector;
int vectorSize;
void citire()
{
	cout << "Cat de mare este vectorul";
	cin >> vectorSize;
	vector = new int[vectorSize];
	for (int i = 0; i < vectorSize; i++)
	{
		cout << "Introduceti element in vector";
		cin >> vector[i];
	}

}


void afisare(int n, int v[])
{
	cout << "Vectorul este" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}





void bubblesort(int vector [],int size)
{
	
	int ultim = size;
	bool change = true;
	while (change == true)
	{
		change = false;
		for (int i = 0; i < ultim - 1; i++)
		{
			if (vector[i] > vector[i + 1])
			{
				int temp = vector[i];
				vector[i] = vector[i + 1];
				vector[i + 1] = temp;
				change = true;
			}
		}
		ultim = ultim - 1;
	}

}

int main()
{

	citire();
	bubblesort(vector, vectorSize);
	afisare(vectorSize, vector);


	return 0;
}
