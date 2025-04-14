#include <iostream>     

int func_sum(){	
    int a;
    int b;

	std::cout << "Enter two integers separated by space: ";
	std::cin >> a >> b;
	
	int sum = a + b;
	std::cout << "Calculation result: " << sum << std::endl;
	
	return sum;
}
