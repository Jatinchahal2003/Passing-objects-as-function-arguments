#include<iostream>
using namespace std;

class sum{
    int a;
    public:
    void set(int i)
    {
        a = i;
    }
    void add(sum x,sum y)
    {
        a = x.a+y.a;
    }
    void display()
    {
        cout <<"The value of a is "<<a<<endl;
    }
};
int main()
{
    sum s1,s2,s3;

    s1.set(10);
    s2.set(20);

    s3.add(s1,s2);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}