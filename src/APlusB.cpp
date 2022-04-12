#include "APlusB.h"

#include <iostream>

auto APlusB() -> void {
	int a{};
	int b{};

	std::cin >> a;
	std::cin >> b;

	std::cout << a + b << std::endl;
}
