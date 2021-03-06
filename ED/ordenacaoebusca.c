#include <stdio.h>
#include "ordbusca.h"

int main(){
	int tam = 10;
	int vb[10]={64, 34, 25, 1, 12, 22, 11, 90, 8, 48};
	int vs[10]={64, 34, 25, 1, 12, 22, 11, 90, 8, 48};
	int vi[10]={64, 34, 25, 1, 12, 22, 11, 90, 8, 48};
	int v[10]={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("Bubble Sort \n");
	show(vb,tam);
	bsort(vb,tam);
	show(vb,tam);

	printf("Selection Sort \n");
	show(vs,tam);
	ssort(vs,tam);
	show(vs,tam);

	printf("Insertion Sort \n");
	show(vi,tam);
	isort(vi,tam);
	show(vi,tam);

	printf("\n %d LSEARCH",lsearch(1,v,tam));
	printf("\n %d BSEARCH",bbr(1,v,0,9));

	printf("\n %d LSEARCH",lsearch(0,v,tam));
	printf("\n %d BSEARCH",bbr(0,v,0,9));
}
