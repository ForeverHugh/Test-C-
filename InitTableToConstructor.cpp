#include <iostream>
#include <string>

using namespace std;

class Student{
	private:
		string m_name;
		int m_age;
		string m_sex;

	public:
		Student(string name,int age,string sex);
		void say();
};

Student::Student(string name,int age,string sex):m_name(name),m_age(age),m_sex(sex){}

void Student::say(){
	cout<<"name:"<<m_name<<"\nage:"<<m_age<<"\nsex:"<<m_sex<<endl;
}

int main(){
	Student *pStu = new Student("lucy",30,"girl");
	pStu->say();

	delete pStu;
	return 0;
}