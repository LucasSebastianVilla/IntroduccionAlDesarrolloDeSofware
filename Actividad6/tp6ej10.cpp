#include <iostream>
using namespace std;
void palabra(string pal){
	int a=0,e=0,i=0,o=0,u=0;
	for(int j=0;j<pal.size();j++){
		switch(pal[j]){
			case 'a': a++;break;
			case 'e': e++;break;
			case 'i': i++;break;
			case 'o': o++;break;
			case 'u': u++;break;
		}
		
	}
	cout<<"Cantidad de letras: "<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"e: "<<e<<endl;
	cout<<"i: "<<i<<endl;
	cout<<"o: "<<o<<endl;
	cout<<"u: "<<u<<endl;
}
int main(int argc, char *argv[]) {
string palabr;
	cout<<"Ingrese la palabra a analizar: "<<endl;
	cin>>palabr;
	palabra(palabr);
	return 0;
}

