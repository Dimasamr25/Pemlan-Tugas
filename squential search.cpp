#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
// squential search
main(){
	
	int index[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int ada; 
    int cari; 
    int a; 
    printf("Masukkan data yang ingin dicari = "); 
    scanf("%d",&cari); 
    a=0; 
    ada=0;
	
	
	while (a<10 && ada!=1){
		if (index[a]==cari){
			ada=1;
		}else{
			a++;
		}
	}
	
	if(ada==1){
		printf("data %d ada dalam base\n",cari);
		
	}else{
		printf("data %d tidak ada dalam base\n",cari);
	}
} 
*/
/*
// squential search with sentinel
int main(){
    int data[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int cari;
	printf("masukkan data yang ingin dicari = ");
    scanf("%d",&cari);
    data[9] = cari;
    int i;
    
    i=0;
        while(data[i] != cari){
        i++;
        }
            if(i<9){
                printf("Data ada!\n");
            }
            else{
                printf("Data tidak ada!\n");
            }
getch();
return 1;
}
*/
// binary search 

int main (){
int i=0;
int x;
int akhir=9,awal=0,tengah,ada=0;
int data[10] = {0,1,2,3,4,5,6,7,8,9};

printf("Masukan data yang di cari : ");
	scanf("%d",&x);

while(akhir>=awal){
	//mencari titik tengah 
 tengah = (awal+akhir)/2;
 
   if(data[tengah] == x ){
    printf("%d ada di index ke %d ",x,tengah);
    ada=1;
    break;
         }
   else{
   	//mencari data di awal
    if(x > tengah){
     awal = tengah +1;
        }
    else{
    	//mencari data di akhir
     akhir=tengah-1;
     }
   }
      }
 if(ada==0){
   printf("data %d tidak ada",x);
       }

       }
