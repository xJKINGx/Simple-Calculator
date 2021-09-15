#include <iostream>

float calculate(char input);

int main() {
	char ans{};
	std::cout << "Select between 1-4:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division"
		<< std::endl;
	std::cin >> ans;
	std::cout << "Answer: " << calculate(ans);
}

float calculate(char input) {
	float answer{};
	float firstNumber{};
	float secondNumber{};

	std::cout << "First number: ";
	std::cin >> firstNumber;
	std::cout << "Second Number: ";
	std::cin >> secondNumber;

	switch (input) {
	case '1':
		answer = firstNumber + secondNumber;
		break;
	case '2':
		answer = firstNumber - secondNumber;
		break;
	case '3':
		answer = firstNumber * secondNumber;
		break;
	case '4':
		answer = firstNumber / secondNumber;
		break;
	}

	return answer;
}