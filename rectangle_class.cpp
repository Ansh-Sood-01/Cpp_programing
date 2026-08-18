#include<iostream>
using namespace std;

class Rectangle{
public:
    float length;
    float breadth;

    float input(){
        cout<<"enter the length: "<< endl;
        cin>>length;
        cout<<"Enter the breadth: "<<endl;
        cin>>breadth;

    }

    void area(){
        float area = length*breadth;
        cout<<"The area of rectangle is: "<< area<<endl;
    }

    void display(){
        cout<<"Length of the rectangle is: "<<length<< endl;
        cout<<"breadth of the rectangle is: "<<breadth<< endl;

    }

};

int main(){
    Rectangle R1;
    R1.input();
    R1.display();
    R1.area();
    Rectangle R2;
    R2.input();
    R2.display();
    R2.area();



}