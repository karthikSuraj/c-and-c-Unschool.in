#include <iostream>
#include <conio.h>
using namespace std;
class calculator
{



        public: void cal()
        {

        char op;
        float a;
        float b;

        cout<<"enter the operator you wana use?  ";
        cin>>op;
        cout<<"enter first number? ";
        cin>>a;
        cout<<"enter second number? ";
        cin>>b;


            switch (op)
        {
            case '+' :
            cout<<" sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
            break;

            case '-' :
            cout<<" diffrence of "<<a<<" and" <<b<<" is "<<a-b<<endl;
            break;
            case '*' :
            cout<<" product of "<<a<<" and "<<b<<" is "<<a*b<<endl;
            break;
            case '/' :
            cout<<" devision  of "<<a<<" and "<<b<<" is "<<a/b<<endl;
            break;
            //case '%' :
            //cout<<" reminder when of "<<a<<" is divided "<<b<<" is "<< a%b<<endl;
            //break;
            default :
              cout << " give a proper operator to use " << endl;
        }
        }


};
int main()
{

    int k=1;


while(k)
{
    calculator c;
    c.cal();
    int next;
    cout<<" type '1' for another calculation and '0 ' to stop ";
    cin>>next;
    k=next;
     system("cls");


}
cout<<"destructor called";






return 0;
}




