#include <iostream>
#include <string>
 
class Zebra{
public:
    std::string zebraName;
    int m_age;
 
    Zebra(std::string name = "", int age = 0)
        : zebraName(zebraName), m_age(age)
    {}
 
    std::string getName() const { return zebraName; }
    int getAge() const { return m_age; }
};
 
class Phoebe : public Zebra
{
public:
    double height;
    int age;
    Phoebe(double height = 0.0, int age = 0)
       : height(height), age(age)
    {}
};
 
int main()
{
    Phoebe Phoebe;
    Phoebe.zebraName = "Phoebe";
    std::cout << Phoebe.getName() << '\n'; // use the getName() function we've acquired from the Person base class
    return 0;
}