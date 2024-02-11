#include<iostream> 
using namespace std;


class Human{
    protected:
        int height;

    
    public:
        int age;

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

class Male: protected Human{
    public:
        string color;

        Male(){
            cout << "Male Constructor called!" << endl;
        }

        void setHeight(int height){
            this -> height = height;
        }

        int getHeight(){
            return this -> height;
        }

        void setWeight(int weight){
            this -> weight = weight;
        }

        int getWeight(){
            return this -> weight;
        }


        void sleep(){
            cout << "Male is sleeping! " << endl;
        }

};

int main(){

    Male obj;
    obj.setHeight(5);
    // cout << obj.age << endl;; // can not access because it now protected in Male sub class
    // cout << obj.weight; // cannot access this because it is has become protected in the child class
    cout << obj.getHeight() << endl;

    /*
    string str;
    cout<<sizeof(str)<<endl;
    Male obj1;
    Human obj2;
    obj1.age = 20;

    cout << "Human:- " << sizeof(obj2) << endl;
    cout << "Male:- " << sizeof(obj1) << endl;
    cout << obj1.getAge() << endl;
    obj1.sleep();
    */
    // cout << obj1.sleep() << endl; showing error because sleep is not returning anythin

    return 0;
}