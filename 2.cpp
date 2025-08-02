//2.Write a program to swap the values of two different classes using friend function.

#include <iostream>
using namespace std;
class ClassB;
class ClassA
{
    private:
    int x;
    public:
    void getdata()
    {
        cout<<"Enter value of x of classA :"<<endl;
        cin>>x;
    }
    void display()
    {
        cout<<"Value1 = "<<x<<endl;
    }

    friend void swap(ClassA&,ClassB&);
};
class ClassB
{
    private:
    int y;
    public:
    void getdata()
    {
        cout<<"Enter a value of y of classB :"<<endl;
        cin>>y;
    }
    void display()
    {
        cout<<"Value2 = "<<y<<endl;
    }
    
    friend void swap(ClassA&,ClassB&);
};
void swap(ClassA& m, ClassB& n){
    int temp = m.x;
    m.x = n.y;
    n.y = temp;
}
int main ()
{
    ClassA p;
    ClassB q;
    p.getdata();
    q.getdata();
    cout<<"Value before swapping:"<<endl;
    p.display();
    q.display();
    swap(p,q);
    cout<<"Value after swapping:"<<endl;
    p.display();
    q.display();
    return 0;
}
