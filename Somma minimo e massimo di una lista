#include <stdio.h>
#include <iostream>
using namespace std;

int S, N;
int main(){
	freopen("input/2", "r", stdin);
	freopen("output/2", "w", stdout);
	scanf("%d", &N);
	int A[N];
	
	for (int i=0;i<N;i++){
		scanf("%d", &A[i]);
	}
	int max=0;
	int min=0;
	for (int z=0;z<N;z++){
		if(A[z]>max){
			max=A[z];
		}
		else if(A[z]<min){
			min=A[z];
		}
	}
	S = max+min;
	printf("%d", S);		
}
