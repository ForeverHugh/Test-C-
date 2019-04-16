#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class VLA{
	private:
		const int m_len;
		int *m_arr;
		int *m_p;

	public:
		VLA(int i);
		~VLA();

	public:
		void input();
		void show();

	private:
		int* at(int len);	//获取第i个元素的指针
};

VLA::VLA(int len):m_len(len){
	m_arr=new int[m_len];
}

VLA::~VLA(){
	delete[] m_arr;
	cout<<"release store"<<endl;
}

void VLA::show(){
	for(int i=0; m_p=at(i); i++){
		if(i!=m_len-1){
			cout<<*m_p<<", ";
		}else{
			cout<<*m_p<<endl;
		}
	}
}

void VLA::input(){
	for(int i=0; m_p=at(i); i++){
		cin>>*m_p;
	}
}

int* VLA::at(int i){
	if(!m_arr || i<0 || i>=m_len){
		return NULL;
	}else{
		return m_arr+i;
	}
}

int main(){
	
	VLA *vla = new VLA(3);

	vla->input();
	vla->show();

	delete vla;
	return 0;
}