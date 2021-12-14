#include <iostream>

int main()
{
	int inputNum;
	std::cin >> inputNum;
	int even_numbers, more4_small12;
	// 判断奇偶
	if(inputNum % 2 == 0)
	{
		even_numbers = 1;
	}
	else
	{
		even_numbers = 0;
	}
	// 大于 4 小于等于 12
	if(inputNum > 4 && inputNum <= 12)
	{
		more4_small12 = 1;
	}
	else
	{
		more4_small12 = 0;
	}

	int xiaoA, uim, baWeiYong, zhengMei;
	// 都符合
	if(even_numbers == 1 && more4_small12 == 1)
	{
		xiaoA = 1;
		uim = 1;
		baWeiYong = 0;
		zhengMei = 0;
	}
	// 仅符合一个
	else if(even_numbers == 1 || more4_small12 == 1)
	{
		xiaoA = 0;
		uim = 1;
		baWeiYong = 1;
		zhengMei = 0;
	}
	// 都不符合
	else
	{
		xiaoA = 0;
		uim = 0;
		baWeiYong = 0;
		zhengMei = 1;
	}
	std::cout << xiaoA << " " << uim << " " << baWeiYong << " " << zhengMei;
	return 0;
}
