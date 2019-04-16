#include <iostream>
#include <string>

using namespace std;

//形参默认参数及、内联函数
inline void fun(string name,int age,string sex="girl"){
	cout<<"-----------------------------"<<endl;
	cout<<"name:"<<name<<"\nage:"<<age<<"\nsex:"<<sex<<endl;
}

int main(){
	string name;
	int age;
	string sex;

	cout<<"name:"<<endl;
	cin>>name;

	cout<<"age:"<<endl;
	cin>>age;

	fun(name,age);
}