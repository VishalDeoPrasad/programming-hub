#include <iostream>
using namespace std;
class Employee{
    public:
        string name;
        int salary;

        Employee(string name, int salary){
            this->name = name;
            this->salary = salary;
        }

        void printDetails(){
            cout<<this->name<<endl<<this->salary;
        }

};

int main(){
   Employee har("Vishal", 50000000);
   //har.name = "vishal";
   //har.salary = 50000000;
   har.printDetails();
   //cout<<har.name<<endl<<har.salary;
}