#include<stdio.h>

int main () {
    int n,x;
    printf("Enter the size of first array :");
    scanf("%d",&n);

    printf("Enter the size of second array :");
    scanf("%d",&x);

    int a[n];
    int b[x];

     printf("Enter first array :"); 
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]); 
     }

     printf("Enter second array :");   // In this the loop we store the elements of b[x] in a[x] by increasing the size by a[n+i]
     for(int i=0;i<x;i++){
        scanf("%d",&b[i]);
     }

     for(int i=0;i<x;i++){
        a[n+i]=b[i];
     }

     printf("The merged array is :");
     for(int i=0;i<(n+x);i++){
        printf("%d",a[i]);
     }
     
     return 0;

}
