#include<iostream>
using namespace std;

class book{
    string name;
    int cost;

    public:
     book(string name,int cost){
        this->name=name;
        this->cost=cost;
     }

     friend void compare(book &obj1,book &obj2);
};

void compare(book &obj1,book &obj2){
    if(obj1.cost>obj2.cost){
        cout<<obj2.name<<"is cheap than the other book"<<endl;
    }

else{
    cout<<obj1.name<<"is cheap then the other book"<<endl;
}
}
int main(){
    book b1("maths book",500);
    book b2("english book",400);
    compare(b1,b2);
    return 0;
}