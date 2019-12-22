#include <stdio.h>

main(){
    int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int i;
    printf("Data urut\n");
    //Menggunakan Looping
    for(i=0;i<20;i++){
        printf("Data ke-%d =  %d \n",i+1,arr[i]);
    }
    printf("\nData terbalik\n");
    //Menggunakan Looping Urut Terbalik
    for(i=19;i>=0;i--){
        printf("Data ke-%d =  %d \n",i+1,arr[i]);
    }
}
