#include"lr.h"
#include<stdio.h>
#define YES 1
#define NO 0
void printBinary(unsigned int x) {
    if (x > 1) {
        printBinary(x / 2);
    }
    printf("%d", x % 2);
}
void iSort(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
    int pow(int x, int y)
{
int x1 = x;
 if (y == 0) {
 return 1;
  }
 for (int i = 1; i < y; i++) {
 x1 = x1 * x;
    }
    return x1;
}
int lab1(){
        float L, v1, t;
    int v2;
    scanf("%f", &L);
    scanf("%f", &v1);
    scanf("%f", &t);
    v2=(int)(L-(v1*t))/t;
    printf("%d", v2);

return 0;
}
int lab2(){
    float s = 0, a;
    int n, g, x;
    scanf("%d", &n);
    scanf("%d", &x);
    g = 1;
    for (float i = 1; i <= n; i++)
    {
        a = pow(x, i) / i;
        s = s + a * g;
        g = -g;
    }
    printf("s=%.2f", s);
return 0;
}
int lab3(){
      int flag = NO;
    int cnt = 0;
    int buk = 0;
    int n = 3;

    char c;

    while ((c = getchar()) != EOF) {
        if (c == '.' || c == ',' || c == ' ' || c == '\n') {
            flag = NO;
            if (buk > n) {
                cnt++;
            }
            buk = 0;
        } else {
            if (flag == NO) {
                flag = YES;
                buk++;
            } else {
                buk++;
            }
        }
    }

    if (buk > n) {
        cnt++;
    }

    printf("number of words = %d\n",cnt);

return 0;
}
int lab6() {
int N=3,K=4;
    int arr[N][K];
    int minI = 0;
    int minS = 30000;
    for (int i=0;i<N;i++){//������� �����
        for(int j=0;j<K;j++){//
            scanf("%d", &arr[i][j]);//������ ����� �� �������
        }
    }

    for(int i = 0; i < N; i++) {//
        int sum = 0;
        for(int j = 0; j < K; j++) {//
            sum += arr[i][j];
        }
        if(sum < minS) {
            minS = sum;
            minI = i;
        }
    }
    for(int j = 0; j < K; j++) {
        arr[minI][j] = 0;
    }
    printf("\n");//������� ������
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < K; j++) {//
            printf("%d ", arr[i][j]);
        }
        printf("\n");//
    }
    return 0;
}
int lab61() {
// ������� ���������� ������� �������
    // ������� ���������� �������
    int N = 3, K = 4;
    int arr[N][K];

    // ���������� �������� � ������
    printf("������� �������� ������� %dx%d:\n", N, K);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // �������������� ���������� ������� � ���������� ��� ����������
    int size = N * K;
    int flatArr[size];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            flatArr[i * K + j] = arr[i][j];
        }
    }

    // ���������� ����������� ������� ������� �������
    iSort(flatArr, size);

    // �������������� ����������� ������� ������� � ���������
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            arr[i][j] = flatArr[i * K + j];
        }
    }

    // ����� ���������������� �������
    printf("��������������� ������:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}
int lab7(){
    unsigned int N; // �������� �����
    int position = 0; // ������� ������� �������
    unsigned int mask = 1; // ��������� ����� ��� ������ ��������

    printf("Vvedite chiclo N: ");
    scanf("%d", &N); // ���� ����� �������������

    // ����� ������� ������� ������� � �������������� �����
    while ((N & mask) == 0) {
        position++;
        mask <<= 1; // ����� ����� �� ���� ��� �����
    }
    printf("poz ml edini: %d\n", position + 1);
    printf("chiclo N v dvoich: ");
    printBinary(N);
    return 0;
}


