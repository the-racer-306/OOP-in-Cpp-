#include <iostream>

using std::string;
using namespace std;

class Employee // Encapsulation
{
private:
  string Name;
  string Company;
  int Age;
public:
  void setName(string name){
    Name = name;
  }
  string getName() {
    return Name;
  }

  void setComapny(string company){
    Company = company;
  }
  string getCompany() {
    return Company;
  }

  void setAge(int age){
    if(age >= 18) 
    Age = age;
  }
  int getAge() {
    return Age;
  }

  void introduceYourSelf() {
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
  }

  Employee(string name, string company, int age) {
    Name = name;
    Company = company;
    Age = age;
  }
};

int main() 
{
Employee employee1 = Employee("khaled", "Google", 21);
employee1.setAge(5);
int age = employee1.getAge();
employee1.introduceYourSelf();
cout << age << endl;
}



