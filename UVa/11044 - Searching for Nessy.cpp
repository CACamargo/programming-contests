#include <iostream>

int main(int argc, char const *argv[])
{
	using namespace std;
	int t;
	long n, m;
	
	cin >> t;
	
	while (t > 0)
	{
		cin >> n >> m;
		cout << (n/3)*(m/3) << endl;
		t -= 1;
	}

	return 0;
}