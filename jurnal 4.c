#include<stdio.h>
#include<string.h>

char username[99], pass[99];
int n=3,i;

main ()
{
	printf("Username : ");gets(username);
	printf("\nPassword : ");gets(pass);
	

	if ((strcmp(username, "Daskom")==0 && strcmp(pass, "dskm20")==0))
	{
		printf("Login berhasil\n");
	}
	else if (n>1)
	{
		 printf ("Login gagal, kesempatan anda tinggal %d kali\n\n", n-1);
		 n=n-1; system("cls");
		 main();
	}
	else printf("Login gagal, kesempatan anda telah habis\n\n");
	system("pause");
	
}
