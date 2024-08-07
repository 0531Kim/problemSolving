#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(void){
	
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	bool arr[1000001];
	
	memset(arr, false, 1000001);
	
	arr[0] = true;
	arr[1] = true;
	
	int start,end;
	
	cin>>start>>end;
	
	for(int i=2;i<=sqrt(end);i++){
		if(arr[i]==false){
			for(int j=2*i;j<=end;j+=i){
				arr[j] = true;
			}
		}
	}
	
	for(int i=start;i<=end;i++){
		if(arr[i]==false){
			cout<<i<<"\n";
		}
	}
	
	return 0;
}