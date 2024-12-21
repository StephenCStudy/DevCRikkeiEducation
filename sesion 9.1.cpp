#include <stdio.h>

int main() {
    int arr[100]; 
    int currentLength = 0;     
    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &currentLength);
    if (currentLength > 100 || currentLength < 1) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    
    for (int i = 0; i < currentLength; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
	  
    int value, addIndex;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them (0-%d): ", currentLength);
    scanf("%d", &addIndex);

    
    if (addIndex < 0 || addIndex >= 100) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    
    
    if (addIndex >= currentLength) {
        arr[addIndex] = value;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = value;
        currentLength++;
    }

    
    printf("Mang sau khi them phan tu moi:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
