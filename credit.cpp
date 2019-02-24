#include <iostream>
using namespace std;

int main() {
long int num;
int a ; int b=0 ;//a是每個位數，b是總和
long int d = 1000000000000000;//求每個位數
cout <<"請輸入你的卡號(16位數，只接受visa)";
cin >> num;

if(num/1000000000000000 == 4){
for(int i=1;i<16;i++){
  a=num/d;
  num=num%d;
  d=d/10;
  if(i%2==0&&a*2<10){
  b=b+a;
      }
  else if(i%2==1&&a<10){
  b=b+a*2;
      }
  else if(i%2==1&&a*2>10){
  b=b+(a*2-9);
      }
    }
  if(10-b%10==num){
  cout<<"符合編號規則";
       }
  else
  cout<<"不符合編號規則";
  }
  else{
  cout<<"不是visa卡";
  }
}
