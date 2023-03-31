#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of decimal values =");
    scanf("%d",&n);

    int arr[n];
    printf("enter the %d decimal numbers=",n);
    for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    printf("array= %d",arr[n]);
return 0;
}