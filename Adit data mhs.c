#include <stdio.h>
struct mahasiswa{
char nama[20],nim[20],nilai[40];
}mhs[40];

int n, a, j=1, i=1;

void input(int x, int c);
void output(int y, int b);

int main(){
	printf("Banyak Mahasiswa : ");scanf("%d", &n); getchar();
	a=n;
	printf("==INPUT==\n");
	input(n, i);
	printf("\n==OUTPUT==");
	output(a, j);
	return 0;
}

void input(int x, int c){
if (x > 0){
	printf("Nama Mahasiswa %d: ",c);gets(mhs[x].nama);
	printf("NIM : ");gets(mhs[x].nim);
	printf("Nilai : "); gets(mhs[x].nilai);
	c=c+1;
	x=x-1;
	input(x, c);
	}
}

void output(int y, int b){
	if (y > 0){
	printf("\nNama mahasiswa %d: %s\n",b,mhs[y].nama);
	printf("NIM : %s\n",mhs[y].nim);
	printf("Nilai : %s",mhs[y].nilai);
	b=b+1;
	y=y-1;
	output(y,b);
}
}
