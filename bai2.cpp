#include <stdio.h>

int main(){
    int a[5];
    
    printf("nhap cac phan tu cho mang: \n");
    for(int i=0;i<5;i++){
        printf("nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
       printf("cac phan tu trong mang la :\n");
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
