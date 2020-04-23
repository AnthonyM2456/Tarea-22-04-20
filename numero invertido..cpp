#include <iostream>

using namespace std;
int main(){
	
	int x,rest,z;
	cout << "digite un numero: ";
	cin >> x;
	do{
		cout << x % 10 << "\t";
		x = x / 10;
	}while(x != 0);
	
	return 0;
}

