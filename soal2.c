/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : Overview of C Language
 *   Hari dan Tanggal    : 15 April 2026
 *   Nama (NIM)          : Muhammad Adli Syauqi (13224082)
 *   Nama File           : soal2.c
 *   Deskripsi           : Program menerima n bilangan integer yang akan diiterasi terhadap suatu fungsi matematis untuk dihitung jumlah langkah di rekursifnya
 * 
 */

#include <stdio.h>

int rekursif(int n, int count){
    if(n == 1){
        return count;
    }

    count++;
    
    if(n%2 == 1){
        n = n*3 + 1;
    }else{
        n = n/2;
    }

    return rekursif(n, count);
}

int main(){
    int T;
    scanf("%d", &T);

    int array[T];

    for(int i = 0; i < T; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < T; i++){
        int count = 0;
        array[i] = rekursif(array[i], count);
        printf("LANGKAH %d\n", array[i]);
    }
}
