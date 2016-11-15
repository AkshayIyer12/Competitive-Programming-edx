#include<fstream>
int main()
{
	std::ifstream inf("aplusb.in");
	std::ofstream ouf("aplusb.out");
	unsigned long long int a, b;
	inf >> a >> b;
	ouf << a + b * b;
	return 0;
}