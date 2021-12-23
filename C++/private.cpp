#include <iostream>
#include <String>

using namespace std;

class Employee{
    public:
        string name;
        int salary;

        Employee(string name, int salary, int key){
            this->name = name;
            this->salary = salary;
            this->key = key;
        }

        void printDetails(){
            cout<<"Name = "<<this->name<<" and Salary = "<<this->salary<<endl;
        }

        void hackPrivateKey(){
            cout<<"Private key = "<<this->key;
        }

    private:
        int key;
};

int main(){
    Employee emp("Vishal", 50000000, 8535);
    emp.printDetails();
    emp.hackPrivateKey();
}