int main(){
	int N;
	freopen("input/3", "r", stdin);
	freopen("output/3", "w", stdout);
	scanf("%d", &N);
	
	int A[N];
	
	for (int i=0;i<N;i++){
		scanf("%d", &A[i]);
	}
	
	for (int z=0;z<N;z++){
		if(A[z]%2==0){
			A[z]/=2;
		}
		else if(A[z]%2!=0){
			A[z]*=2;
				
		}
	}
	
	for (int v=0;v<N;v++){
		printf("%d ", A[v]);
	}
		
}
