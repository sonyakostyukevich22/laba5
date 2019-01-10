#include <iostream>
5
void f()
{
	int arr[17]{ 2,41,21,-8,-3,12,5,7,-2,6,4,11,16,18,-8,-1,13 };
	for (int i = 0; i < 17; ++i)
	{
		if (arr[i] % 3 == 0)
		{
			for (int j = 0; j < 17; ++j)
			{
				if (arr[j] % 2 != 0)
				{
					arr[i] += arr[j];
				}
			}
		}
		std::cout << " " << arr[i] << std::endl;
	}
}

int main()
{
	f();
	system("pause");
	return 0;
}