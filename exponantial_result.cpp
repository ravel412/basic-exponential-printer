// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 int a,b;
 cout<< "Üssü alınacak sayıyı giriniz..";
 cin>>a;
 cout<<"Girdiğiniz say, "<<a<<"^x 'tir x'in değerini bulmak için  değer giriniz";
 cin>>b;
 int c = a;
 for(int i=1; i<b; i++) {
     a = a*c;
     
     
 }
 
 cout<<"Girdiğiniz üssün açılmış hali "<<a<<" dır";


 return 0;
 
}