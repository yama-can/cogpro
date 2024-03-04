#include <bits/stdc++.h>
using namespace std;

int main(int argc)
{
	if (argc == 0)
	{
		return;
	}
	else
	{
		cout << "Now " << argc << " is the argument" << endl;
		main(argc - 1);
	}
}
