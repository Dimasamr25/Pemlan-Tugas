#include <stdio.h>
main()
{
char nama_lengkap[50];
char nama_panggilan[20];
char alamat[20];
char agama[10];
char status[20];
int hp;
int umur;

	{
	
		printf("___________________________________\n");
		printf("++++Silahkan Isi Data Diri Anda++++\n");
		printf("-----------------------------------\n");


		printf("Nama Lengkap\t: "); 
		scanf("%s",&nama_lengkap);
		
		printf("Nama Panggilan\t: "); 
		scanf("%s",&nama_panggilan);
		
		printf("Alamat\t: "); 
		scanf("%s",&alamat);
			
		printf("Agama\t: "); 
		scanf("%s",&agama);
			
		printf("Status\t: "); 
		scanf("%s",&status);
		
		printf("No HP\t: "); 
		scanf("%d",&hp);
		
		printf("Umur\t: "); 
		scanf("%d”",&umur);

			printf("\n\n");
			
	printf("Nama Lengkap %s,Nama Panggilan %s, Alamat %s, Agama %s, Status %s,  No. HP %d, Umur %d,\n",nama_lengkap,nama_panggilan,agama,status,hp,umur);
	printf("Bagaimana Kabar anda hari ini?\n");


	}
	return 0;
}
