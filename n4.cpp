#include <iomanip>
#include <fstream>
#include <cmath>

int main()
{
		std::ifstream inf("team.in");
		std::ofstream ouf("team.out");

		int a[3][3], i, j;
		for(i = 0; i < 3; i++)
		{
			for(j = 0; j < 3; j++)
			{
				inf >> a[i][j];
			}
		}

		int i0, i1, i2, result = 0;
		for(i0 = 0; i0 < 3; i0++)
		{
			for(i1 = 0; i1 < 3; i1++)
				if(i0 != i1)
				{
					i2 = 3 - i0 - i1;
					result = std::max( result , ((a[0][i0] * a[0][i0]) + (a[1][i1] * a[1][i1]) + (a[2][i2] * a[2][i2])));
				}
		}

		ouf << std::setprecision(10) << std::sqrt(result) << "\n";
		return 0;

}