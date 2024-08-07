#include <iostream>
using namespace std;
 
void NumZeros(){
	int N;
	int zeros;
	cin>>N;
	
	zeros = (int)(N/125)+(int)(N/25)+(int)(N/5);
	cout<<zeros<<endl;
}

int main() {
	NumZeros();
	return 0;
}