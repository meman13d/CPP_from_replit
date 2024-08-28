#include <iostream>
using namespace std;

int main() {
  int values[] = {19, 94, 73, 48, 21, 28, 20, 34, 70, 75};

  float length = sizeof(values)/sizeof(int);

  for (int i =0;i<length;i++){
    int current = values[i];
    int i2 = i;
    while(i2>0 and values[i2-1]>current){
      values[i2] = values[i2-1];
      i2 = i2-1;
      values[i2] = current;
    }
  }
  for(int i=0;i<length;i++){
    cout<<values[i]<<endl;
  }
}
