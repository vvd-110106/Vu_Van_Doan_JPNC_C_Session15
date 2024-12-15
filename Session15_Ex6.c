#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int total = 7;
    int vi_tri = -1;
 
    for (int i = 0; i < 7; i++) {
        if (arr[i] == total) {
            vi_tri = i;  
            break;        
        }
    }

    printf("Gia tri tim kiem: %d\n", vi_tri);

    return 0;
}
