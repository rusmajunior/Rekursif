#include <stdio.h>

int input(int, int, int, int);

int main(){
int p, r, total, deret=1;

	printf("==INPUT==\n");
	printf("Panjang deret : "); scanf("%d",&p);
	printf("Rasio : "); scanf("%d",&r);

	printf("==OUTPUT==\n");
	printf("Deret : ");	input(r,p,deret,total);
	return 0;
}

int input(int a, int b, int drt, int tot){
	if (b==0){
		printf("\nHasil Total : %d",tot);
	return 1;
	} 
	else {
		b--;
		drt=drt*a;
		tot=tot+drt;
		printf("%d ",drt);
	return input(a,b,drt,tot);
	}
}

