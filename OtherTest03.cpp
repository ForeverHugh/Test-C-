#include <iostream>
using namespace std;

void change01(int x){
    cout<<&x<<endl;
    x++;
}

void change02(int & x){
    cout<<&x<<endl;
    x++;
}

void change03(int *x){
    cout<<"------------------------"<<endl;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<*&x<<endl;
    cout<<(**&x)++<<endl;
}

int main(){
    int x = 10;
    //值传递
    change01(x);
    cout<<"x="<<x<<endl;
    //引用传递
    change02(x);
    cout<<"x="<<x<<endl;
    //指针传递
    change03(&x);
    cout<<"x="<<x<<endl;

    return 0;
}