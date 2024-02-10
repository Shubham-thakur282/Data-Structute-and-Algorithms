#include<iostream> 
using namespace std;


class Human{
    public:
        int age;
        int height;
        int weight;

        Human(){
            cout << "Human constructor called!" << endl;
        }

        void setAge(int age){
            this -> age = age;
        }

        void setHeight(int height){
            this -> height = height;
        }

        void setWeight(int weight){
            this -> weight = weight;
        }

        int getAge(){
            return this -> age;
        }

        int getHeight(){
            return this -> height;
        }
        
        int getWeight(){
            return this -> weight;
        }
};

class Male: public Human{
    public:
        string color;

        Male(){
            cout << "Male Constructor called!" << endl;
        }

        void sleep(){
            cout << "Male is sleeping! " << endl;
        }

};

int main(){
    string str;
    cout<<sizeof(str)<<endl;
    Male obj1;
    Human obj2;
    obj1.age = 20;

    cout << "Human:- " << sizeof(obj2) << endl;
    cout << "Male:- " << sizeof(obj1) << endl;
    cout << obj1.getAge() << endl;
    obj1.sleep();
    // cout << obj1.sleep() << endl; showing error because sleep is not returning anythin

    return 0;
}