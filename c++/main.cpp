#include <iostream>
#include <fstream>
using namespace std;

struct Users{
    int UScode;
    int Coins;
    string name;
    int houses;
    int cars;
    int airplanes;
}typedef u;

void Accoujnt();
void AddC();
void AddCa();
void AddH();
void AddA();

int main(int argc, char const *argv[])
{
    int chosed1 = 0;
    do
    {
        cout << "1- make an account" << endl;
        cout << "2- add coins" << endl;
        cout << "3- add cars" << endl;
        cout << "4- add houses" << endl;
        cout << "5- add airplanes" << endl;
        cout << "6- exit" << endl;
        cin>>chosed1;
        switch (chosed1)
        {
        case 1:
            Accoujnt();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            cout << "\n\n\t\t\t\t BYE BYE SEE YOU SOON!! \n\n";
            break;
        default:
            cout << "\n\n\t\t\tCHOSE ANOTHER NUMBER \n\n";
            break;
        }
    } while (chosed1 != 6);
        
    return 0;
}

void Accoujnt(){

}
void AddC(){

}
void AddH(){
    
}
void AddA(){
    
}
void AddCa(){

}