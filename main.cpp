#include <iostream>
#include "system.h"

int main()
{
	System sys{{
		{"L", 1.0},
		{"C", 1.0},
		{"R", 0.1},
		{"M", 0.0},
		{"S0", 0.0},
		{"S2", 0.0},
		{"x0", 1.0},
		{"y0", 0.0}
	}};
	//System sys{1.0, 1.0, 0.1, 0.0, 0.0, 0.0, 1.0, 0.0};
	
	std::cout << sys.t() << ' ' << sys.x() << ' ' << sys.y() << '\n';
	for (int i = 0; i < 10000; ++i)
	{
		sys.make_step(1e-4);
		if (i % 10 == 0)
			std::cout << sys.t() << ' ' << sys.x() << ' ' << sys.y() << '\n';
	}
}