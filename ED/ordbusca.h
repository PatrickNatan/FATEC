//mostrar o vetor
void show(int v[], int tam){
	for(int i = 0; i < tam ; i++)
		printf("%d ",v[i]);
	printf("\n");
}
//trocar posições
void troca(int v[],int a,int b){
	int aux;
	aux  = v[a];
	v[a] = v[b];
	v[b] = aux;
}

//1 Bubble Sort Recursive
void empurra(int v[],int k){
	if (k == 0) return;
	empurra(v, k-1);
	if (v[k] < v[k-1]) troca(v,k,k-1);
}

void bsort(int v[],int n){
	if (n < 2) return ;
	empurra(v,n-1);
	bsort(v,n-1);
}
//2 Selection Sort Recursive
int posmax(int v[],int k){
	if (k == 0) return 0;
	int m=posmax(v,k-1);
	if (v[m] > v[k] ) return m;
	return k;
}

void ssort(int v[],int n){
	if (n < 2) return ;
	if (v[n-1] < v[posmax(v,n-1)]) troca(v,n-1,posmax(v,n-1));
	ssort(v,n-1);
}
//3 Insertion Sort Recursive
void insere(int x,int v[], int k){
	if(k == -1 || x>= v[k]) 
		v[k+1] = x;
	else{
		v[k+1] = v[k];
		insere(x,v,k-1);
	}
}

void isort(int v[],int n){
	if (n < 2) return ;
	isort(v,n-1);
	insere(v[n-1],v,n-2);
}
//4 Linear Search Recursive
int lsearch(int x,int v[],int n){
	if(n == 0) return 0;
	if(x == v[n-1]) return 1;
	return lsearch(x,v,n-1);
}

//5 Binary Search Recursive
int bbr(int x,int v[],int i,int f){
	if (i>f) return 0;
	int m =(i + f) / 2;
	if (x == v[m]) return 1;
	if (x < v[m]) return bbr(x,v,i,m-1);
	if (x > v[m]) return bbr(x,v,m+1,f);
}
