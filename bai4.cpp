#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n]; // Khai báo m?ng có kích thu?c d?ng

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
