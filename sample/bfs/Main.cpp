#include <bits/stdc++.h>
using namespace std;

int main(int argc)
{

	// コラッツの予想のうち、 1 になるまでのルートに 100 以下の数字しか出てこないものを列挙します。

	queue<int> bfs;
	bfs.push(1);

	while(!bfs.empty())
	{

		int now = bfs.front();
		bfs.pop();

		cout << now << endl;

		if(now > 100)
		{
			break;
		}

		if((now - 1) % 3 == 0)
		{
			
			bfs.push((now - 1) / 3);

		}
		else
		{

			bfs.push(now * 2);

		}

	}
	
}
