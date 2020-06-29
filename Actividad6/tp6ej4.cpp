#include <iostream>
using namespace std;

void concatena(string str1, string str2){
	cout<<str1<<str2;
}

int main(int argc, char *argv[]) {
	string estr1,estr2;
	cout<<"Ingrese el primer string. "<<endl;
	cin>>estr1;
	cout<<"Ingrese el segundo string. "<<endl;
	cin>>estr2;
	concatena(estr1,estr2);
	return 0;
}

