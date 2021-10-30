#include<iostream>
using namespace std;

class Demo
{
    public:
        int a;
    private:
         int b;
    protected:
          int c;

    public:
    Demo(int i,int j,int k)
    {
        this->a=i;
        this->b=j;
        this->c=k;
    }      
    void fun()
    {
        cout<<"value of a "<<this->a<<"\n";
         cout<<"value of b "<<this->b<<"\n";
          cout<<"value of c "<<this->c<<"\n";
    }


};
int main()
{
    Demo obj(10,20,30);
    
    return 0;
}