#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void SortVector(std::vector<int>& numbers) {
    std::sort(numbers.begin(), numbers.end(), std::greater);

    int main() {
        int numCount;
        std::cin >> numCount;

        std::vector<int>numbers(numCount);

        for (int i = 0; i < numCount; i++) {
            std::cin >> numbers[i];

            SortVector(numbers);

            for (int i = 0; i < numCount; i++)
                std::cout << numbers[i];

            if (i != numCount - 1) {
                std::cout << ",";

                std::cout << std::endl;


                return 0;
            }
