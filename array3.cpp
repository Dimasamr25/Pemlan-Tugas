#include <stdio.h>
#include <conio.h>
#include <string.h>

struct dataipk{
		char npm[10], nama[10];
		float ipk;
	};

struct dataipk mhs[10];

int main() {
	
		int arr[10] = {31,32,33,34,35,36,37,38,39,40};
	int i,j=0;
	int search;
	
	for(i=0;i<3;i++){
		printf("\nNama Mahasiswa\t: ");
		scanf("%s",&mhs[i].nama);
		printf("NPM\t: ");
		scanf("%s",&mhs[i].npm);
		printf("IPK\t: ");
		scanf("%f",&mhs[i].ipk);
		fflush(stdin);		
	}
	
	printf("\n\n");
	
	for(i=0;i<10;i++){
		if(mhs[i].ipk>3)
			printf("\nMahasiswa %s memiliki IPK Diat4s 3",mhs[i].nama);
		else{
			if (mhs[i].ipk<3)
				printf("\nMahasiswa %s memiliki IPK Dibawah 3",mhs[i].nama);
			else
				printf("Data Tidak Ada");}
	}
}
