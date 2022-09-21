#include <stdio.h>

void NhapMang (int a[], int n){
    for(int i =0 ; i < n ; i++){
        printf ("\nNhap a[%d] =",i);
        scanf ( "%d", &a[i]);
    }
}


void XuatMang (int a[], int n){
    for( int i = 0 ; i < n ; i++){
        printf("%5d", a[i]);
    }
}

void TangDan (int a[], int n){
    int tg;
    for (int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(a[i] > a[j]){{
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }}
        }
    }
}

void GiamDan (int a[], int n){
    int tg;
    for (int i=0; i<n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}


int main(int argc, char const *argv[])
{
    int a[100];
    int  n;

    printf("\nNhap so luong phan tu n=");
    do{
        scanf("%d", &n);
        if(n <= 0){
            printf("\nNhap lai n =");
        }
    } 
    while(n <= 0);

    NhapMang (a, n);
    printf("\nMang vua nhap lai:");
    XuatMang(a, n);

    TangDan(a, n);
    printf("\nMang sap xep tang dan la:");
    XuatMang(a, n);

     GiamDan(a, n);
    printf("\nMang sap xep giam dan la:");
    XuatMang(a, n);

    return 0;
}
