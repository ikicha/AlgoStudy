#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int solve();

int main()
{	
	int C;
	cin >> C;
	for(int i = 0; i < C; i++)
	{
		cout << solve() << endl;
	}

	return 0;
}//main()

int solve()
{
	typedef vector<int>::iterator it_t;
	int N;
	int max_result = 0;
	vector<int> v;
	cin >> N;

	for(int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	for(it_t it = v.begin(); it != v.end(); it++)
	{
		int width = 0;
		int result;

		for(it_t it2 = it; it2 != v.begin(); it2--)//backward
		{
			if(it == it2)
				continue;
			if(*it2 >= *it)
				width++;
			else
				break;
		}
		for(it_t it2 = it; it2 != v.end(); it2++)//frontward
		{
			//if(it == it2)
			//	continue;
			if(*it2 >= *it)
				width++;
			else
				break;
		}
		//cout << "[[it=" << *it << ", width=" << width << "]]" << endl;
		result = (*it) * width;
		max_result = max(result, max_result);
	}

	return max_result;
}//solve()
