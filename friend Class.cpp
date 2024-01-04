#include<iostream>
#include<cstring>
using namespace std;

class B;
class A
{
    private:
    
    int roll;

    protected:
    char name[100];
    friend class B;

    public:
    
    void set(int x,char y[100])
    {
        roll=x;
        strcpy(name,y);
    }
    
    void display()
    {   

        cout<<"The roll number is:"<<roll<<endl;
        cout<<"The Name is:"<<name<<endl;
    }
};

class B
{
    public:
    void display()
    {   
        A f;
        char z[100]="home";
        f.set(4,z);
        cout<<"The roll number is:"<<f.roll<<endl;
        cout<<"The Name is:"<<f.name<<endl;
    }
};

int main()
{
    A s1;
    B s2;
    char s[100]="Sra";
    s1.set(12,s);
    s1.display();

    s2.display();
    
    return 0;
}

