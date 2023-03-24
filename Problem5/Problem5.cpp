#include<iostream>

using namespace std;

int main()
{
	//KEEP TAKING FROM USER POSITIVE NUMBER AND PRINT IF IT ODD OR EVEN TILL USER ENTER 0

	int n;
	cout << "Enter numbers: " << endl;
	
	int i = 1;
	while (i)
	{
		cin >> n;
		if (n % 2 == 0 && n != 0)
		{
			cout << "Even" << endl;
		}
		else if (n == 0)
		{
			break;
		}
		else
		{
			cout << "odd" << endl;
		}
		i++;
	}

	return 0;
}