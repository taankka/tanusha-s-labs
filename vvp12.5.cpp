#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"year= "; cin>>n;
    setlocale(LC_ALL, "Russian");
    switch ((n)%10) {
    case 0:
    case 1:
       printf("бел");
       break;
    case 2:
    case 3:
       printf("черн");
       break;
    case 4:
    case 5:
       printf("зелён");
       break;
    case 6:
    case 7:
       printf("красн");
       break;
    case 8:
    case 9:
       printf("жёлт");
       break;
    }
    switch (n % 12) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 9: case 10: case 11:
        cout << "ой";
        break;
    case 6: case 7: case 8:
        cout << "ого";
        break;
    }
    switch ((n+8)%12) {
    case 0:
       printf(" крысы");
       break;
    case 1:
       printf(" коровы");
       break;
    case 2:
       printf(" тигра");
       break;
    case 3:
       printf(" зайца");
       break;
    case 4:
       printf(" дракона");
       break;
    case 5:
       printf(" змеи");
       break;
    case 6:
       printf(" лошади");
       break;
    case 7:
       printf(" овцы");
       break;
    case 8:
       printf(" обезьяны");
       break;
    case 9:
       printf(" курицы");
       break;
    case 10:
       printf(" собаки");
       break;
    case 11:
       printf(" свиньи");
       break;
    }
 
    return 0;
}