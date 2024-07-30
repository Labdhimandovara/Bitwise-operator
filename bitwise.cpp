//Labdhi mandovara
//23070123078

#include <iostream>
using namespace std;
int main() 
{
    int a=5;
    int b=3;
    int c=a&b;
    int d =a|b;
    int e=a^b;
    int f= ~a;
    int g=a>>2;
    int h=a<<2;
    cout<<"AND: "<<c<<endl;
    cout<<"OR: "<<d<<endl;
    cout<<"XOR: "<<e<<endl;
    cout<<"NOT: "<<f<<endl;
    cout<<"Right shift: "<<g<<endl;
    cout<<"Left shift: "<<h<<endl;
}
//OUTPUT
/*AND: 1
OR: 7
XOR: 6
NOT: -6
Right shift: 1
Left shift: 20*/
