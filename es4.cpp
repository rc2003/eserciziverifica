#include <stdio.h>
#include <iostream>
using namespace std;
int N;
int main(){
	

	freopen("input/4", "r", stdin);
	freopen("output/4", "w", stdout);
	scanf("%d", &N);
	int A[N];



	for (int i=0;i<N;i++){
	scanf("%d", &A[i]);

		if (A[i]%2!=0){
		printf("%d ",A[i]);
	
		}
	}

return 0;



}
