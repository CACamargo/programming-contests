#include <iostream>

int main(int argc, char const *argv[])
{
	using namespace std;
	int t;
	long a, b;
	
	cin >> t;
	
	while (t > 0)
	{
		cin >> a >> b;
		
		if (a > b)
		{
			cout << ">" << endl;
		} 
		else if (a < b)
		{
			cout << "<" << endl;
		} 
		else 
		{
			cout << "=" << endl;
		}

		t -= 1;
	}

	return 0;
}