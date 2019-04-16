#include <iostream>
using namespace std;

class Book{
    public:
        Book(){}
        Book(char* title,double price);
        void setTitle(char* title);
        char* getTitle();
        void setPrice(double price);
        double getPrice();
        void display();
    private:
        char * m_title;
        double m_price;
};
Book::Book(char* title,double price){
    m_title=title;
    m_price=price;
}
void Book::setTitle(char* title){
    m_title=title;
}
char* Book::getTitle(){
    return m_title;
}
void Book::setPrice(double price){
    m_price=price;
}
double Book::getPrice(){
    return m_price;
}

void Book::display(){
    cout<<"Title:"<<m_title<<endl;
    cout<<"Price:"<<m_price<<endl;
}

int main(){

    Book book;
    book.setTitle("ssssssssssssssssss");
    book.setPrice(99.9);
    book.display();

    Book* book01 = new Book("history",1000);
    book01->display();

    return 0;
}
