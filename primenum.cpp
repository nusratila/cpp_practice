#include <iostream>

using namespace std;

int main() {

	
	int usernum = 1;

	cout << "Please enter the number,the program will print the prime numbers unlit the number u have entered" << endl;
	cin >> usernum;

	for(int i = 2; i <= usernum; ++i)
	{
		bool is_prime = true;
		for (int j = 2; j <= i / 2; ++j) 
		{
            		if (i % j == 0)
			{
				is_prime = false;
				break;
			}
		}
		if(is_prime)
			cout<< i << endl;
	}






	cout << "Please enter the number, the program will print that many prime numbers starting from 2" << endl;
	cin >> usernum;

	int count = 0;
	int i = 2;

	while(count != usernum)
	{
			bool is_prime = true;
			for (int j = 2; j <= i / 2; ++j) 
			{
            			if (i % j == 0)
				{
					is_prime = false;
					break;
				}
			}
			if(is_prime)
			{
				cout<< i << endl;
				++count;
			}
			++i;
	}



	
	return 0;
}
