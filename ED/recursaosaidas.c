#include <stdio.h>
#include "recursao.h"

int main(void){
	int a=20,b=3,n=4;
	int v[5]={1,2,3,4,5};
	int w[5]={12,13,3,2,1};
	int tam=5;
	float m[5]={1,2,3,4,5};
	char c[10]="AMOR";
	char palin[20]="subi no onibus";
	char frase[500]=" Quantas palavras existem nesta cadeia ";
	printf("SOMA_DIGITOS %d\n",soma_digitos(7859));//29 -- 7+8+5+9
	printf("SUPER DIGITO %d\n",super_digito(7859));//super_digito(9875) = super_digito(29) = super_digito(11) = super_digito(2) = 2
	printf("SOMA   %d\n",soma(a,b));// a+b
	printf("SUB    %d\n",subtracao(a,b));// a-b
	printf("DOBRO  %d\n",dobro(a));// a*2
	printf("METADE %d\n",metade(a));// a/2
	printf("MIN    %d\n",min(a,b));
	printf("MAX    %d\n",max(a,b));
	printf("PAR	   %d\n",par(a));//0 = falso, 1 = verdade
	printf("IMPAR  %d\n",impar(a));//0 = falso, 1 = verdade
	printf("PROD   %d\n",prod(a,b));//a*b
	printf("DIVI   %d\n",divi(a,b));//a/b
	printf("RESTO  %d\n",resto(a,b));//a%b
	printf("POT	   %d\n",pot(a,b));//3^3
	printf("QUADRADO %d\n",quadrado(a));//3^2 -> 1+3+5+7+...+(2*a-1)
	printf("DIGITOS %d\n",digitos_binario(a));//
	printf("MOVIMENTOS %d\n",hanoi(3));
	inverte(c,0,3);
	printf("INVERTE %s\n",c);
	printf("PALINDROMA? %d\n", palindroma(palin,0,13));
	printf("PALAVRAS?   %d\n",palavras(frase));//Funciona para um ou mais espaços tanto no começo quanto no final
	printf("IGUAIS??   %d\n",iguais(v,w,n));
	printf("CRESCENTE?? %d\n",crescente(v,n));
	printf("MAIOR?? %d \n",maior(w,tam));
	printf("MEDIA?%.2f \n",media(m,tam));
	return 0;
}
