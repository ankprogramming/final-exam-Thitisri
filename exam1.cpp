#include <iostream>
using namespace std;
int main() {
    int cmd;
    float a,b,sum1,sum2,sum3,sum4;
    cout<<"Welcome to CLI calculator V1.00" <<endl;
    cout<<"Number 1:";
    cin>>a;
    cout<<"Number 2:";
    cin>>b;

        do{
            cout << "Menu" << endl;
            cout << "1.+" << endl;
            cout << "2.-" << endl;
            cout << "3.*" << endl;
            cout << "4./" << endl;
            cout << "Quit" << endl;
            cout << "Please Enter Menu : ";
            cin >> cmd;

            if (cmd==1){
                sum1=a+b;
                cout<<"Result =" <<sum1 <<endl;
            }
            else if (cmd==2){
                sum2=a-b;
                cout<<"Result =" <<sum2 <<endl;
            }
            else if (cmd==3){
                sum3=a*b;
                cout<<"Result =" <<sum3 <<endl;
            }
            else if (cmd==4){
                sum4=a/b;
                cout<<"Result =" <<sum4 <<endl;
            }
            else {break;}
        }while(1);

        return 0;
}
