// 研究的是静态局部变量和自动变量的区别
#include<iostream>
#include<string>
using namespace std;
void func()
{
	int a = 0;
	static int b = 0;
	cout << a << endl;
	cout << b++ << endl;

}
int main()
{
	const int sz = 10;
	for (int i = 1; i != sz+1; i++)
	{
		cout << "The " << i << "times result" << endl;
		func();
	}
	getchar();
	return 0;

}