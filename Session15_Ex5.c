#include <stdio.h>

void capNhatPhanTu(int *arr, int giaTriMoi, int viTri) {
    *(arr + viTri) = giaTriMoi;
}
int i;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int viTri = 3;
    int giaTriMoi = 50;
    int n = sizeof(arr) / sizeof(int);
    printf("Mang truoc khi cap nhat: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    capNhatPhanTu(arr, giaTriMoi, viTri);
    printf("Mang sau khi cap nhat: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

