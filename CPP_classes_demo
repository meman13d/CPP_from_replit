#include <iostream>
using namespace std;

class pet {
  protected:
  string name;
  int age;

  public:

  pet(string g_name, int g_age){
    cout<<"new pet made"<<endl;
    name = g_name;
    age = g_age;
  }

  void get_name() {
    cout << name<<endl;
  }
  void set_name(){
    cout<< "Enter name: "<<flush;
    cin >> name;
  }
};

class super_pet: public pet{
  private: 
  string superpower;
  string weakness;

  public:
  super_pet(string g_name, int g_age) : pet(g_name, g_age){
   name = g_name;
   age = g_age;
  }
  void set_power(string power){
    superpower = power;
  }
  void get_power(){
    cout<<"Power is: "<<superpower<<endl;
  }
  void set_weakness(string weak){
    weakness = weak;
  }
  void get_weakness(){
    cout<<"Weakness is: "<<weakness<<endl;
  }
};

int main() {
  cout << "Hello World!\n";
  pet cow("cow", 15);
  cout<<"cow name: "<<flush;
  cow.get_name();
  super_pet thunder_cow("thunder cow", 25);
  thunder_cow.set_power("Ultra fast milk production");
  thunder_cow.set_weakness("Meat grinder");
  cout<<"\n"<<endl;
  thunder_cow.get_power();
  thunder_cow.get_weakness();
  return 0;
}
