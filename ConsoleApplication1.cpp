#include <iostream>
#include <chrono>
int main()
{
    auto start = std::chrono::steady_clock::now();
    int g = 10;
    g += 5 * 3 + 2;
    std::cout << "Hello 222World!\n";
    for (int i = 0; i < 10000; i++) {
        printf("%5i", i);
    }
    printf("\n");
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << elapsed.count() << "\n";
}
