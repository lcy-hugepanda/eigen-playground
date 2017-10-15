#include <iostream>
#include "Unsupported/Eigen/CXX11/Tensor"

int main() {
    Eigen::Tensor<int, 2> a(2, 2);
    Eigen::Tensor<int, 2> b(2, 2);

    a(0, 0) = 1;
    a(0, 1) = 2;
    a(1, 0) = 3;
    a(1, 1) = 4;

    b(0, 0) = 1;
    b(0, 1) = 2;
    b(1, 0) = 3;
    b(1, 1) = 4;

    auto c = a + b;

    std::cout << c << std::endl;
}
