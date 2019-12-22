#include<stdio.h>
#include<math.h>

main(){
	double panjangab, panjangbc, panjangtotal;
	int data [3][3][3] = {
	{{1,2,3}},{{4,5,6}},{{9,8,7}}
	
	};

for (int i=0; i<3;i++){
printf("\n");
	for (int j=0; j<3;j++){
	printf("\n");
	for (int k=0; k<3;k++){
	printf ("%d", data[i][j][k]);
		}
	}		
}
printf("\n titik A x = %d, y = %d, z = %d \n ", data[2][0][0], data[0][0][1], data[0][0][2]);
printf("\n titik B x = %d, y = %d, z = %d \n ", data[1][0][0], data[1][0][1], data[1][0][2]);
printf("\n titik C x = %d, y = %d, z = %d \n ", data[2][0][0], data[2][0][1], data[2][0][2]);

printf("\n");
	panjangab = sqrt(pow((data[1][0][0]-data[0][0][0]),2) + pow((data[1][0][1]-data[0][0][1]),2) + pow((data[1][0][2]-data[0][0][2]),2));
	panjangbc = sqrt(pow((data[2][0][0]-data[1][0][0]),2) + pow((data[2][0][1]-data[1][0][1]),2) + pow((data[2][0][2]-data[1][0][2]),2));
	panjangtotal = panjangab+panjangbc;
	printf("panjang total titik a - b - c = %f\n", panjangtotal);
}
