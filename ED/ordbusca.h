void troca(int v[],int a,int b){
	int aux;
	aux  = v[a];
	v[a] = v[b];
	v[b] = aux;
}

void show(int v[], int tam){
	for(int i = 0; i < tam ; i++)
		printf("%d ",v[i]);
}
//1
void empurra(int v[],int k){
	if (k == 1) return;
	empurra(v, k-1);
	if (v[k-2] > v[k-1]) troca(v,k-2,k-1);
}

void bsort(int v[],int n){
	if (n == 1) return;
	empurra(v,n);
	bsort(v,n-1);
}
