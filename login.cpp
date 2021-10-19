#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void berhasil(string username){
    cout << "Hallo " << username << endl;
    cout << "\nNama   : Taufik Rahman Widodo\n";
    cout << "TTL    : Kebumen, 10 Januari 2003\n";
    cout << "Asal   : Kebumen\n";
    cout << "Hobby  : Bermain Game\n";
    cout << "IG     : taufikrw_69\n";
    cout << "Follow gaes\n";
    getch();
}
main(){
    string user,pass,username="taufik",password="1234";
    char pilih;
    int i=1;
    while(i>0){
    cout << "===========================================================\n";
    cout << "                 L O G I N   A D M I N\n";
    cout << "===========================================================\n";
    cout << "Username   : ";
    cin >> user;
    cout << "Password   : ";
    cin >> pass;
    if(user==username&&pass==password){
        cout << "Login Berhasil\n\n";
        cout << "(Press any key to continue)";
        getch();
        system("cls");
        berhasil(username);
    }
    else{
        cout << "Login Gagal\n";
        cout << "Ingin mencoba lagi[y]? ";
        cin >> pilih;
        if(pilih=='y'){
            system("cls");
            continue;
        }
        else{
            break;
        }
    }
    i--;
    }
    return 0;
}
