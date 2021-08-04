#include <stdio.h>

int pangkat (int x, int y);

void main(){
	int x, y;	
		printf("angka	: "); scanf("%d",&x);
		printf("pangkat : "); scanf("%d",&y);
		printf("\nHasil   : %d",pangkat(x,y));
}

int pangkat (int x, int y){
	if (y==0)
		return 1;
	else {
		return x*pangkat(x,y-1);  
	}
	
}
