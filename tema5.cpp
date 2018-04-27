//sa cream un shared_ptr peste clasa templetizata si sa facem diferite operatii(get, set)
#include <iostream>
#include<memory> //shared_ptr

using namespace std;
template<class T>
class MyPerson{
    private:
        T nr;
    public:
        MyPerson(T n){
            nr = n;
        }
        T getAge(){
            return nr;
        }
        void setAge(T n){
            nr = n;
        }
        ~MyPerson(){}
};


int main()
{
    //cout<<"Hello World";
    shared_ptr<MyPerson<int>> u;
    u = make_shared<MyPerson<int>>(10);
    
    cout<< "Persoana are " << u.get()->getAge() << " ani." << endl;
    u.get()->setAge(30);
    cout<< "Persoana are " << u.get()->getAge() << " ani." << endl;

    return 0;
}

