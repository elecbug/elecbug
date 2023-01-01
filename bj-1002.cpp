#include <iostream>
#include <math.h>

class Point
{
private:
	int x, y;

public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	double distance(Point unit)
	{
		return sqrt(pow(x - unit.x, 2) + pow(y - unit.y, 2));
	}

	bool equals(Point unit)
	{
		return x == unit.x && y == unit.y;
	}
};

int main()
{
	int i;
	std::cin >> i;
	for (int idx = 0; idx < i; idx++)
	{
		int x, y;
		double ra, rb, r;
		std::cin >> x >> y >> ra;
		Point a(x, y);
		std::cin >> x >> y >> rb;
		Point b(x, y);

		r = a.distance(b);

		if (a.equals(b) && ra == rb)
			std::cout << "-1\n";
		else if (ra + rb == r || ra == r + rb || rb == r + ra)
			std::cout << "1\n";
		else if (ra + rb > r && ra < r + rb && rb < r + ra)
			std::cout << "2\n";
		else 
			std::cout << "0\n";
	}
}
