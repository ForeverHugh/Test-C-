#include <iostream>
#include <string>
int main()
{
	//声明命名空间
	using namespace std;

	//定义字符串变量
	string str;
	//定义 int 变量
	int age;

	//重控制台获取用户输入
	cin>>str>>age;


	//将数据输出到控制台
	cout<<str<<"已成立"<<age<<"年了！！！"<<endl;

	return 0;
}