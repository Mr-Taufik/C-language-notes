//指针遇上数组


#include <stdio.h>

int main()
{

	char* string[] = { "Hello", "world" };
	//数组里面有两个元素，里面两个元素都是指针，8 + 8 等于16个字节
	//里面存放的是两个字符串的地址
	///指针数组里面存放的肯定是指针了
	///string 是地址的地址，数组里面存放的是hello和world分别两个不同的字符串的地址，
	/// 而string相当于是hello的地址的地址，相当于是二级指针
	printf("%s\n", string[1]);
	return 0;
}
////
//// 指针型数组