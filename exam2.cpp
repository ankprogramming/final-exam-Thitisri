#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    int cmd;
    string name;
    string line;
    ofstream write;
    ifstream read;

    do{
        cout << "Menu" << endl;
        cout << "1. add student." << endl;
        cout << "2. list student." << endl;
        cout << "3. list student Firstname X." << endl;
        cout << "4. Find list student." << endl;
        cout << "5. quit." <<  endl;
        cout << "Please enter menu :";
        cin >> cmd;

        if(cmd == 1){
            cout << "Enter Std name :" ;
            cin >> name;
            write.open("std.txt", fstream::app);
            if (write.is_open()) {
                write<< name <<endl;
                write.close();
            }else{
                cout << "Unable to open file ";
            }
        }

        else if (cmd == 2){
            read.open("std.txt");
            if (read.is_open()){
                while(getline(read,line)){
                    cout << line << endl;
                }
            }
        }
            else if (cmd == 3){
            read.open("std.txt");
            if (read.is_open()){
                while(getline(read,line)){
                    cout << line << endl;
                }
            }
        }

        else if (cmd == 4){
            read.open("std.txt");
            if (read.is_open()){
                while(getline(read,line)){
                    cout << line << endl;
                }
            }
        }else{
            break;
        }
    }while (1);

        /* code */
        return 0;
}
