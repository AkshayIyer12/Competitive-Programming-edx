#include <fstream>

int main() {
    int a, b;
    std::ifstream("aplusb.in") >> a >> b;
    std::ofstream("aplusb.out") << a + b;
    return 0;
}