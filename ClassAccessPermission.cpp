#include <iostream>
#include <string>

using namespace std;

class Student{
	//私有变量
	private:
		string m_name;
		int m_age;
		string m_sex;

	//公有方法
	public:
		void setName(string name);
		void setAge(int age);
		void setSex(string sex);
		void say();
};

void Student::setName(string name){
	m_name=name;
}

void Student::setAge(int age){
	m_age=age;
}

void Student::setSex(string sex){
	m_sex=sex;
}

void Student::say(){
	cout<<"name:"<<m_name<<"\nage:"<<m_age<<"\nsex:"<<m_sex<<endl;
	cout<<"------------"<<endl;
}

int main(){
	
	//在线上创建对象
	Student stu;
	stu.setName("lucy");
	stu.setAge(18);
	stu.setSex("girl");
	stu.say();

	//在堆创建对象
	Student *pStu=new Student();
	pStu->setName("lucy");
	pStu->setAge(20);
	pStu->setSex("girl");
	pStu->say();

	delete pStu;
	return 0;
}