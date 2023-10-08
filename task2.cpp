include <iostream>

using namespace std;

class Person

{
public:

    int roll;

    double grade;

    Person (int b, double c)

    {
        roll = b;
       grade = c;

    }
    void display ()
    {
        cout << "Roll:"<< roll <<endl<< "Grade:"<< grade <<endl;
    }
};
int main ()
{
    Person ob(77,3.44);
    ob.display();
}

