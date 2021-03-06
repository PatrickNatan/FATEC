#define MAX(a,b) ((a) > (b) ? (a) : (b))

//1
int soma_digitos(int n){
	if(n<10) return n%10;
	return soma_digitos(n/10)+(n%10);
}
//2
int super_digito(int n){
	if(n<10) return n%10;
	return super_digito(soma_digitos(n));
}
//3
int suc(int n) { return n+1; }
int pred(int n) { return n-1; }
//3a
int soma(int a,int b){
	if(a == 0) return b;
	return suc(soma(pred(a),b));
}
//3b
int subtracao(int a,int b){
	if(b == 0 ) return a;
	return pred(subtracao(a,pred(b)));
}
//3c
int dobro(int n){	
	if(n==0) return 0;
	return suc(suc(dobro(pred(n))));
} 
//3d
int metade(int n){
	if(n<=0) return n;
	return suc(metade(pred(pred(n))));
}
//3e
int min(int a,int b){
	if (a==0) return a;
	if (b==0) return b;
	return suc(min(pred(a),pred(b)));
}
//3f
int max(int a,int b){
	if (a==0) return b;
	if (b==0) return a;
	return suc(max(pred(a),pred(b)));
}
//3g
int par(int n){
	if (n == 0) return 1;
	if (n == 1) return 0;
	return par(pred(pred(n)));
}
//3h
int impar(int n){
	if (n == 0) return 0;
	if (n == 1) return 1;
	return impar(pred(pred(n)));
}
//4a
int prod(int a,int b){
	if(b == 0) return 0;
	return soma(prod(a,pred(b)),a);
}
//4b
int divi(int a,int b){
	if(a < b) return 0;
	return suc(divi(subtracao(a,b),b));
}
//4c
int resto(int a, int b){
	if(a < b) return a;
	return resto(subtracao(a,b),b);
}
//4d 
int pot(int base,int expoente){
	if(expoente == 0) return 1;
	return prod(pot(base,pred(expoente)),base);
}
//4e
int quadrado(int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	return soma(quadrado(pred(n)),(pred(prod(n,2))));
}
//5
int digitos_binario(int n){
	if(n == 0 || n ==1) return 1;
	return digitos_binario(n/2)+1;
}
//6
int hanoi(int d){
	if(d == 1) return 1;
	return hanoi(d-1)+(pot(2,d-1));
}
//7
void inverte(char *c,int p, int u){
	int aux;
	if(p > u)
		return 0;
	else{
		aux=c[p];
		c[p]=c[u];
		c[u]=aux;
	}
	inverte(c,(p+1),(u-1));
}
//8
int palindroma(char *c,int p, int u){
	if(p >= u)
		return 1;
	if(c[p] == ' ')
		p++;
	if (c[p] != c[u])
			return 0;
	palindroma(c,(p+1),(u-1));
}
//9
int palavras(char *c){
	if(*c == '\0') return -1;
	if(*c == ' ' && *(c+1) != ' ') return palavras(c+1)+1;
	return palavras(c+1);
}
//10
int iguais(int *v,int *w,int n){
	if(v[n]!= w[n]) return 0;
	if(n == 0) return v[n]==w[n];
	return iguais(v,w,n-1);
}
//11
int crescente(int *v,int n){
	if(n == 1) return v[n]>v[n-1];
	if(v[n]<v[n-1]) return 0;
	return crescente(v,n-1);
}
//12
int maior(int *v,int n){
	if(n == 1) return v[0];
	return MAX(maior(v,n-1),v[n-1]);
}
//13
float media(float *m,int n){
	if(n == 1) return m[n-1 ];
	return (media(m,n-1)*(n-1)+m[n-1])/n;
}



