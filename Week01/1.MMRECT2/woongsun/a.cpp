#include <iostream>
#include <vector>
using namespace std;

class Point
{
	public:
	int x;
	int y;

	Point()
	{
		x = 0;
		y = 0;
	}
};

int main()
{
	int T;
	int *N;
	vector<Point> *vpnt;
	cin >> T;
	N = new int[T];
	vpnt = new vector<Point>[T];
	for(int i = 0; i < T; i++)
	{
		N[i] = 0;
	}
	
	for(int i = 0; i < T; i++)
	{
		cin >> N[i];
		for(int j = 0; j < N[i]; j++)
		{
			Point tmp;
			cin >> tmp.x >> tmp.y;
			vpnt[i].push_back(tmp);
		}
	}
	

	return 0;
}
