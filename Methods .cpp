#include <iostream>
using namespace std;
class Student
{
  public:
    int id;
    string name,subject;

    void inputData(){
      cout<<"enter Id :"<<endl;
      cin>>id;
      cout<<"enter Name :"<<endl;
      cin>>name;
      cout<<"enter subject :"<<endl;
      cin>>subject;
    }

    void displayData(){
      cout<<"ID :"<<id<<endl;
      cout<<"Name :"<<name<<endl;
      cout<<"subject :"<<subject;
    }
};
int main() {
  std::cout << "Hello World!\n";
  Student obj;
  obj.inputData();
  obj.displayData();
}
