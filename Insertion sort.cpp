#include<stdio.h>
 
int main()
{
    int i,j,n,temp,a[30];
    printf("Masukkan Angka Yang Ingin di Input:");
    scanf("%d",&n);
    printf("\nMasukkan Angka\n");
 
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 
    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;
 
        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];    //moves element forward
            j=j-1;
        }
 
        a[j+1]=temp;    //insert element in proper place
    }
 
    printf("\nSorted list is as follows\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
 
    return 0;
}
