#include <iomanip>
#include <fstream>

int main() {
    int a, b, c;
    std::ifstream("chairs.in") >> a >> b >> c;
    std::ofstream("chairs.out") << std::setprecision(8) << (a + b + c) / 6.0;
    return 0;
}  
