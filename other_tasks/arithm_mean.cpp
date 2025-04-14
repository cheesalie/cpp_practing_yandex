#include <iostream>

int func_arithm_mean() {	
	int max_size = 0;
	std:: cout << "Enter max size" << std::endl;
	
	std::cin >> max_size;
	
	int arr[max_size] = {0};
	int actual_size = 0;
		
	for (int i = 0; i < max_size; i++) {
		std::cin >> arr[i];
		actual_size++;
	}
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
	std::cout << "Size of array: " << n << std::endl;

	int sum = 0;
	
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	
	std::cout << "Sum of elements: " << sum << std::endl;
	
	double ar_mean = sum/n;
	
	std::cout << "Arithmetic Mean: " << ar_mean << std::endl;


    return 0;
}

