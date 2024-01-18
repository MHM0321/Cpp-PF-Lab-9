#include<iostream>
using namespace std;
void input(char a[], int n);

int main()
{
	char character, array[30];
	int index;
	cout << "Enter a character : ";
	cin >> character;
	cin.ignore();
	cout << "Enter a sentence : ";
	input(array, 30);
	for (int i = 0; i < 30; i++)
	{
		if (array[i] != character)
		{
			cout << array[i];
		}
	}
	cout << endl;
	system("pause");
	return 0;
}

void input(char a[], int n)
{
	cin.getline(a, n);
}