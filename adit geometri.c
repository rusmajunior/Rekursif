#include <stdio.h>
int input(int, int, int, int);

void main(){
int x,y;
int tot=0;
int hasil=1;
	printf("==INPUT==\n");
	printf("Panjang deret : "); scanf("%d",&x);
	printf("Rasio : "); scanf("%d",&y);

	printf("==OUTPUT==\n");
	printf("Deret : ");	input(y,x,hasil,tot);
}

int input(int a, int b, int hsl, int tot){
	if (b==0){
		printf("\nHasil Total : %d",tot);
	return 1;
	} 
	else {
		b--;
		hsl=hsl*a;
		tot=tot+hsl;
		printf("%d ",hsl);
	return input(a,b,hsl,tot);
	}
}

