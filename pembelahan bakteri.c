#include<stdio.h>

int geo(int n);
int x, hasil, a;
int main(){
    printf("Pembelahan bakteri\n" );
    
    printf("Input waktu : ");scanf("%d",&x); getchar();
    hasil = geo(x);
    printf("Jumlah bakteri adalah %d", hasil);
    return 0;
}

int geo(int n){
	x=2,a;
    if(n==2){
    	return 2;
}
	else if(n>2) {
        x=x*geo(n-2);
        a=1*x;
        
}
}
