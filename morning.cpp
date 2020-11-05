#include <iostream>
#include <queue>

using namespace std;

int main()
{
	long long l, r, k;
	queue<long long> q;
	cin >> l >> r;
	for (int i = 1; i <= r, i <= 9; i++)
	{
		q.push(i);
	}
	while (!q.empty())
	{
		k = (q.front() * 10 + (q.front() % 10 + 1));
		if (k <= r && (q.front() % 10 != 9))
			q.push(k);
		if (q.front() >= l)
		{
			cout << q.front() << " ";
			q.pop();
		}
		if (q.front() < l)
			q.pop();
	}
	cout << "Hay lam";
	return 0;
}
