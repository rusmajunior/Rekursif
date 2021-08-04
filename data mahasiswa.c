#include <stdio.h>
struct data{
char nama[99],nim[99], nilai[99];
}mhs[99];

int input(int x, int i);
int output(int x, int j);
int n, i=1, j=1;

int main(){
	printf("Banyak Mahasiswa : ");scanf("%d", &n); getchar();
	printf("==Input==\n");
	input(n, i);
	printf("\n\n==Output==");
	output(n, j);
	return 0;
}

int input(int x, int i){
	if (x > 0){
	printf("Nama mahasiswa %d : ", i);gets(mhs[x].nama);
	printf("NIM   : ");gets(mhs[x].nim);
	printf("Nilai : ");gets(mhs[x].nilai);
	i++;
	x--;
	return input(x,i);
	}
}	
	
int output(int x, int j){
	if (x > 0){
	printf("\nNama mahasiswa %d: %s\n", j,mhs[x].nama);
	printf("NIM   : %s\n",mhs[x].nim);
	printf("Nilai : %s ", mhs[x].nilai);
	j++;
	x--;
	return output(x,j);
}
}
