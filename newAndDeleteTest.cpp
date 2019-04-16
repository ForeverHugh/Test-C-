#include <iostream>
#include <string>

int main(){
	
	//开辟十个int类型的空间
	int *p = new int[10];

	//释放空间
	delete[] p;
}