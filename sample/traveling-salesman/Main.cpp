#include <bits/stdc++.h>
using namespace std;

int main(int argc)
{
	int n;
	cin >> n;

	vector<vector<int>> costs(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> costs[i][j];
		}
	}

	vector<vector<int>> dp(1 << n, vector<int>(n, INT_MAX));

	dp[0][0] = 0;

	for (int bit = 0; bit < (1 << n); bit++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (bit & (1 << j))
				{

					continue;
				}

				dp[bit | (1 << j)][j] = min(dp[bit | (1 << j)][j], dp[bit][i] + costs[i][j]);
			}
		}
	}

	cout << dp[(1 << n) - 1][0] << endl;
}
