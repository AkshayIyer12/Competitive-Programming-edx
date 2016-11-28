#include<iomanip>
#include<fstream>
int main() {
  /* code */
  int a,b,c;
  std::ifstream("chairs.in") >> a >> b >> c;
  std::ofstream("chairs.out") << ( a + b + c ) / 6.0;
  return 0;
}
