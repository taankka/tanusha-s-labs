#include <iostream>
using namespace std;
int main()
{
    char S; int N;
    cout << "napravlenie(s,u,z,v)= ";
    cin >> S;
    cout << "komanda= ";
    cin >> N;
    cout<<"napravlenie= ";
    switch (N) {
        case 1: switch (S) {
            case 'c': cout << "z"; break;
            case 'u': cout << "v"; break;  
            case 'z': cout << "u"; break;
            case 'v': cout << "c"; break;
        } break ;
        case -1: switch (S) {
            case 'c': cout << "v"; break;
            case 'u': cout << "z"; break;  
            case 'z': cout << "c"; break;
            case 'v': cout << "u"; break;
        } break;
        case 0: switch (S) {
            case 'c': cout << "c"; break;
            case 'u': cout << "u"; break;  
            case 'z': cout << "z"; break;
            case 'v': cout << "v"; break;
        } break;
     }
    return 0;

}