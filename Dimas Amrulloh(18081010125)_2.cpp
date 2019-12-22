#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int pangkat(int a, int b){
	if(b == 1){
		return a;
	}
	else{
		return a*pangkat(a,(b-1));
	}
}


int main(int argc, char *argv[]) {
	int a,b;
	int hasil=1;
	int i=0;
	
	
	
	printf("Masukkan Angka : ");
	scanf("%d",&a);
	printf("dipangkatkan : ");
	scanf("%d",&b);
	printf("Hasil angka %d dipangkatkan %d = %d\n",a,b, pangkat(a,b) );
		
	printf("Hasil rekursifnya adalah %d\n",pangkat(a,b));
	
	for(i=0;i<b;i++){
		hasil=hasil*a;
	}
	
	printf("Hasil dari iterasi biasa adalah %d\n",hasil);
	
	
	
	
	return 0;
}
