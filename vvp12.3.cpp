#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string a[31] = {"десять","одиннадцaть","двенадцать","тринадцать","четырнадцать","пятнадцать","шестнадцать","семнадцать","восемнадцать","девятнадцать","двадцать","двадцать одно","двадцать два","двадцать три","двадцать четыре","двадцать пять","двадцать шесть","двадцать семь","двадцать восемь","двадцать девять", "тридцать","тридцать одно","тридцать два","тридцать три","тридцать четыре","тридцать пять","тридцать шесть","тридцать семь","тридцать восемь","тридцать девять","сорок"};
	int x;
    cout<<"задания= ";
	cin >> x;
	if (x==31 or x==21){
		cout << a[x-10] << " учебное задание";
	}
	else {
		cout << a[x-10] << " учебных заданий";
	}
	return 0;
}