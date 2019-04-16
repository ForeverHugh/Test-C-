#include <iostream>
#include <string>

using namespace std;

class Student{
  public:
	string name;
	int age;
	string sex;

	void say(){
		cout<<"name:"<<name<<"age:"<<age<<"sex:"<<sex<<endl;	
	}
};

int main(){
	Student *pStu = new Student;
	pStu->name="lucy";
	pStu->age=18;
	pStu->sex="18";
	pStu->say();
	delete pStu;

	return 0;
}