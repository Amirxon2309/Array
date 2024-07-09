#include <stdio.h>
#include <stdbool.h>


void chiqishToqlar(int arr[], int n);
void chiqishJuftlar(int arr[], int n);
void chiqishManfiylar(int arr[], int n);
void chiqishMusbatlar(int arr[], int n);
void chiqishTubSonlar(int arr[], int n);
void toqlarYigindisiVaSoni(int arr[], int n, int *sum, int *count);
void juftlarYigindisiVaSoni(int arr[], int n, int *sum, int *count);
void manfiylarYigindisiVaSoni(int arr[], int n, int *sum, int *count);
void musbatlarYigindisiVaSoni(int arr[], int n, int *sum, int *count);
void tubSonlarYigindisiVaSoni(int arr[], int n, int *sum, int *count);
bool tubSon(int n);



void chiqishToqlar(int arr[], int n) {
    printf("Toq elementlar: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void chiqishJuftlar(int arr[], int n) {
    printf("Juft elementlar: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void chiqishManfiylar(int arr[], int n) {
    printf("Manfiy elementlar: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void chiqishMusbatlar(int arr[], int n) {
    printf("Musbat elementlar: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void chiqishTubSonlar(int arr[], int n) {
    printf("Tub sonlar: ");
    for (int i = 0; i < n; i++) {
        if (tubSon(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void toqlarYigindisiVaSoni(int arr[], int n, int *sum, int *count) {
    *sum = 0;
    *count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            *sum += arr[i];
            (*count)++;
        }
    }
}

void juftlarYigindisiVaSoni(int arr[], int n, int *sum, int *count) {
    *sum = 0;
    *count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            *sum += arr[i];
            (*count)++;
        }
    }
}

void manfiylarYigindisiVaSoni(int arr[], int n, int *sum, int *count) {
    *sum = 0;
    *count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            *sum += arr[i];
            (*count)++;
        }
    }
}

void musbatlarYigindisiVaSoni(int arr[], int n, int *sum, int *count) {
    *sum = 0;
    *count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            *sum += arr[i];
            (*count)++;
        }
    }
}

void tubSonlarYigindisiVaSoni(int arr[], int n, int *sum, int *count) {
    *sum = 0;
    *count = 0;
    for (int i = 0; i < n; i++) {
        if (tubSon(arr[i])) {
            *sum += arr[i];
            (*count)++;
        }
    }
}

bool tubSon(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}int main() {
    int arr[] = {1, -2, 3, 4, -5, 6, 7, 8, 9, -10, 11, 12, 13, 14, 15, -16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum, count;

    // Toqlarni chiqarish
    chiqishToqlar(arr, n);

    // Toqlarni yig'indisi va soni
    toqlarYigindisiVaSoni(arr, n, &sum, &count);
    printf("Toqlar yig'indisi: %d, Toqlar soni: %d\n", sum, count);

    // Juftlarni chiqarish
    chiqishJuftlar(arr, n);

    // Juftlarni yig'indisi va soni
    juftlarYigindisiVaSoni(arr, n, &sum, &count);
    printf("Juftlar yig'indisi: %d, Juftlar soni: %d\n", sum, count);

    // Manfiylarni chiqarish
    chiqishManfiylar(arr, n);

    // Manfiylarni yig'indisi va soni
    manfiylarYigindisiVaSoni(arr, n, &sum, &count);
    printf("Manfiylar yig'indisi: %d, Manfiylar soni: %d\n", sum, count);

    // Musbatlarni chiqarish
    chiqishMusbatlar(arr, n);

    // Musbatlarni yig'indisi va soni
    musbatlarYigindisiVaSoni(arr, n, &sum, &count);
    printf("Musbatlar yig'indisi: %d, Musbatlar soni: %d\n", sum, count);

    // Tub sonlarni chiqarish
    chiqishTubSonlar(arr, n);

    // Tub sonlarni yig'indisi va soni
    tubSonlarYigindisiVaSoni(arr, n, &sum, &count);
    printf("Tub sonlar yig'indisi: %d, Tub sonlar soni: %d\n", sum, count);

    return 0;
}
