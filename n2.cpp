#include <fstream>

int main() {
    int a, b;
    std::ifstream("aplusbb.in") >> a >> b;
    std::ofstream("aplusbb.out") << a + (long long) (b) * b;
    return 0;
}