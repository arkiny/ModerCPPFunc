#include <functional>
#include <iostream>
#include <vector>

// 0 ���� �� ��츦 Provide �ؾ��t
void print(void)
{

}

template <typename First, typename ...Rest>
void print(const First& first, Rest&&... Args )
{
	std::cout << first << std::endl;
	print(Args...);
}

auto main() -> int
{
	auto variadic_generic_lambda = [](auto... param) {};

	std::function<void(int, int)> func = variadic_generic_lambda;
	std::vector<std::function<void(int, int)>> vec;
	vec.push_back(func);

	return 0;
}