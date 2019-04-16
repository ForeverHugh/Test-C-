#include <iostream>
using namespace std;

class Array{
    public:
        Array(){m_length=0;m_arr=NULL;}
        Array(int length,int* arr);
        Array(Array &arr);
        void set(int value,int index);
        int * getAddress();
        int getLength();
        void display();
        ~Array();
    private:
        int m_length;
        int * m_arr;
};
Array::Array(int length,int* arr){
    if(arr!=NULL){
        m_length=length;
        m_arr=new int[length];
        for(int i=0; i<length; i++){
            m_arr[i]=arr[i];
        }
    }else{
        cout<<"NUll"<<endl;
    }
}
Array::Array(Array &arr){
    if(arr.m_arr!=NULL){
        m_length=arr.m_length;
        m_arr=new int[arr.m_length];
        for(int i = 0; i < arr.m_length; i++){
            m_arr[i]=arr.m_arr[i];
        }
    }else{
        m_length=0;
        m_arr=0;
    }
}

void Array::set(int value,int index){
    if(index<m_length){
        m_arr[index]=value;
    }else{
        cout<<"index out of range!"<<endl;
    }
}

int* Array::getAddress(){
    return m_arr;
}

int Array::getLength(){
    return m_length;
}

void Array::display(){
    for(int i=0; i<m_length; i++)
        cout<<m_arr[i]<<" ";
    cout<<endl;
}

Array::~Array(){
    if(m_arr!=NULL){
        delete[] m_arr;
    }
}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    Array array_01(5,arr);
    array_01.display();
    Array array_02(array_01);
    array_02.set(10,2);
    array_02.display();
    array_01.display();
    return 0;
}
