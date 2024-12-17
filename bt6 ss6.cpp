#include <stdio.h>

int main() {
    int n,i=1;
    printf ("nhap n");
    scanf("%d",&n);
    printf("cac uoc cua %d",n);
    for ( int i = 1; i<=n ; i++){
        if(n % i == 0 ){
        	printf(" %d la uoc cua cua%d\n",i,n);
    }
}
    return 0;
		}