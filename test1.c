//错误的交换代码示例
/*
#include <stdio.h>


void swap(int x, int y)
{
	int t = x;
	x = y;
	y = t;
}

int main()
{
	int a = 1, b = 2;

	swap(a, b);///这个代码是错误的，这里面交换的是swap函数里面x和y的值，
	//而且会在函数调用完事以后被释放掉
	//如果要交换实参的值，必须要传入地址
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
*/

#include <stdio.h>


void swap(int *x, int *y)///这里面的星号表示的是x和y是一个指针
{///x和y保存的是a和b的地址
	int t = *x; //这里面的*指的是取值的意思，下面的也一样，都是取值的意思
	*x = *y;    
	*y = t;
}

int main()
{
	int a = 1, b = 2;

	swap(&a, &b);//这里传入的是地址
	printf("a = %d, b = %d\n", a, b);
	return 0;
}