#include<iostream>
using namespace std;
void take(char a1[], char a2[]); //takes 2 char arrays as input
int myStringLength(char arr[]); //finds length if the char array (works similar to str.len())
int myStringFind(char string1[], char string2[]); //finds if the second char array is in the first char array

int main()
{
	char str1[100] = {'\0'};
	char str2[100] = { '\0' };
	take(str1, str2);
	cout << "Length of str1: " << myStringLength(str1) << endl;
	cout << "Lenght of str2: " << myStringLength(str2) << endl;
	int index = myStringFind(str1, str2);
	if (index != -1)
	{
		cout << "Str2 found in Str1 at index: " << index << " till index " << (index + myStringLength(str2)) - 1 << endl;
		for (int i = index; i < (index + myStringLength(str2)); i++)
		{
			cout << str1[i];
		}
		cout << endl;
	}
	else
	{
		cout << "Str2 not found in Str1";
	}
	system("pause");
	return 0;
}

void take(char a1[], char a2[])
{
	cout << "Enter first sentence for string :" << endl;
	cin.getline(a1, 100);
	cout << "Enter second sentence for string :" << endl;
	cin.getline(a2, 100);
}

int myStringLength(char arr[])
{
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		{count++; }
	}
	return count;
}

int myStringFind(char string1[], char string2[])
{
	int count = 0;
	for (int j = 0; j <= (myStringLength(string1)); j++)
	{
		if (string2[0] == string1[j])
		{
			for (int k = 0; k < (myStringLength(string2)); k++)
			{
				if (string2[k] == string1[j + k])
				{
					count++;
				}
				else if (string2[k] != string1[j + k])
				{
					break;
				}
			}
			if (count == myStringLength(string2))
			{
				return j;
			}
		}
	}
	return -1;
}