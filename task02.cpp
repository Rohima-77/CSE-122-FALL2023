include <iostream>

using namespace std;

class Person

{
public:
    string name;

    int age;

    string address;

    Person (string a, int b, string c)

    {
        name = a;
        age = b;
        address = c;

    }
    void display ()
    {
        cout << name <<endl<< age <<endl<< address;
    }
};
int main ()
{
    Person ob("rohima",20,"mohammadpur");
    ob.display();
}

