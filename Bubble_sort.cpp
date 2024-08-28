#include <iostream>
using namespace std;

int main() {
  bool swap = true;
  int values[10] = {19, 94, 73, 48, 21, 28, 20, 34, 70, 75};

  while(swap == true){
    swap = false;
    for(int i = 0; i<10; i++){
      if (values[i]>values[i+1]){
        int temp = values[i];
        values[i] = values[i+1];
        values[i+1] = temp;
        swap = true;
      }
    }
  }
  for (int i=0;i<10;i++){
    cout<<values[i]<<endl;
  }
}
