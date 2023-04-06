#include<iostream>
#include<string>


using namespace std;


int main() {
	string num;
	cin >> num;
	int len = num.size();
	for (int i = len-1; i >= 0; i--)
	{
		if (num[len-1]=='0')
		{
			if (num[len-2] == '0')
			{
				i -= 2;
			}
			else
			{
				i--;
			}
		}
		cout << num[i];
	}




	return 0;
}