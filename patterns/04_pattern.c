#include<stdio.h>

int main()
{
    int i,j,n=5;
    /*
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    } */
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("%c",i+64);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}
/*
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<=n-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
