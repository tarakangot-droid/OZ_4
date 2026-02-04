#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "Russian");
    double x;
    std::cout << "x: ";
    std::cin >> x;

    double y = sin(x); 
    int i = 1;       

    while (fabs(y) >= 0.0001) {
        y = sin(y);   
        i++;
    }

    std::cout << "\nПервый член последовательности меньше 0.0001:\n";
    std::cout << "y = " << y << std::endl;
    std::cout << i;
  

    return 0;
}