#include <stdio.h>
#include <conio.h>


int main(){
	int n;
	int npm[11];
    int ip;
    int ipk[20];
        
	printf("Masukkan jumlah mahasiswa yang ingin di data: ");
	scanf("%d", &n);
	printf("\n");
    
	for(int i=0; i<n; i++){
	printf("Masukkan NPM mahasiswa dengan ke %d: ", i+1);
	scanf("%d", &npm[i]);
	}
	printf("\n");
	
	printf("Masukkan jumlah mahasiswa yang ingin dimasukkan nilai ipk nya : ");
	scanf("%d", &ip);
	printf("\n");
	

	for(int i=0; i<ip; i++){
		printf("Masukkan ipk mahasiswa dengan npm %d 	: ", i+1);
		scanf("%f", &ipk[i]); 
	}
	printf("\n");
	

	for(int i=0; i<ip; i++){
		printf("Mahasiswa dengan NPM %d memiliki IPK: %f \n", i+1, ipk[i]);
	}
	
     return 0;   
}
