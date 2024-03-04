#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct Edge
{
	int to;
	T cost;
};

template <typename T>
using Graph = vector<vector<Edge<T>>>;

template <typename T>
vector<T> dijkstra(const Graph<T> &graph, int start, T inf = numeric_limits<T>::max())
{
	priority_queue<pair<T, int>, vector<pair<T, int>>, greater<pair<T, int>>> que;
	que.push(make_pair(0, start));

	vector<T> dist(graph.size(), inf);

	while (!que.empty())
	{

		T d = que.top().first;
		int v = que.top().second;
		que.pop();

		if (dist[v] != inf)
		{

			continue;
		}

		dist[v] = d;

		for (auto &e : graph[v])
		{
			que.push(make_pair(d + e.cost, e.to));
		}
	}

	return dist;
}
