#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename C> 
void dump(const char *desc, C c) 
{ 
	cout.width(12);
	cout << left << desc << "==> ";
	copy(c.begin(), c.end(), std::ostream_iterator<typename C::value_type>(cout," ")); 
	cout << endl; 
}
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
	
	for(int i = 0; i < T; i++)
	{
		dump("vpnt : ", vpnt[i]);
	}

	return 0;
}
