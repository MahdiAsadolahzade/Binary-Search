#include<iostream>
using namespace std;
#define Size 100
int binarySearch(int arr[], int l, int r, int x);
void sort(int arr[], int n);

int main()
{
	int arr[Size];
	cout << "Enter how many numbers you want" << endl;
	int n;
	cin >> n;
	cout << "Enter your numbers :" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, n);
	cout << "enter number you want to search:" << endl;
	int x;
	cin >> x;

	int result = binarySearch(arr, 0, n - 1, x);

	if (result == -1)
	{
		cout << "Element is not in your numbers" << endl;
	}
	else
	{
		cout << "Element index is :" << result + 1 << endl;
	}
	return 0;
}


//tabe bazgashti jost o hoye dodoyi
//index adade dade shode bargardande mishavad
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;
		//jostojo dar samte chap
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		//jostojo dar samte rast
		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}

//tabe baraye morattab sazi baraye jostojooye binary
void sort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
}
