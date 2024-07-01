#include <stdio.h>
#include <stdlib.h> /* memcpy用 */

/* データの数 */
#define NUM 10

/* 配列のデータを表示する関数 */
void printArray(int a[], int num) {
    int i;
    for (i = 0; i < num; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

/* ２つの集合をマージする関数
 * data[] : マージを行うデータの集合
 *         (マージ後のデータの集合を格納)
 * left : マージする１つ目の集合範囲の開始点
 * mid : マージする１つ目の集合の範囲の終了点
 * right : マージする２つ目の集合の範囲の終了点
 * work[] : マージを行うために必要な作業メモリ
 *          (マージ先集合として一時退避先として使用)
 */
void merge(int data[], int left, int mid, int right, int work[]) {
    int i, j, k, size;

    /* １つ目の集合の開始点をセット */
    i = left;

    /* ２つ目の集合の開始点をセット */
    j = mid + 1;

    /* マージ先集合の開始点をセット */
    k = 0;

    /* ２つの集合のどちらかが全てマージ済みになるまでループ */
    while (i <= mid && j <= right) {
        /* マージ済みデータを抜いた２つの集合の
           先頭のデータの小さい方をマージ */
        if (data[i] < data[j]) {
            work[k] = data[i];
            /* マージした集合のインデックスと
               マージ先集合のインデックスをインクリメント */
            i++;
            k++;
        }
        else {
            work[k] = data[j];
            /* マージした集合のインデックスと
               マージ先集合のインデックスをインクリメント */
            j++;
            k++;
        }
    }

    /* マージ済みでないデータが残っている集合を
       マージ先集合にマージ */
    while (i <= mid) {
        work[k] = data[i];
        i++;
        k++;
    }
    while (j <= right) {
        work[k] = data[j];
        j++;
        k++;
    }

    /* マージ先集合のサイズを計算 */
    size = right - left + 1;

    /* マージ先集合をdataにコピー */
    memcpy(&data[left], work, sizeof(int) * size);
}

/* マージソートを行う関数
 * data[] : ソートを行うデータの集合
 *          (ソート後のデータの集合を格納)
 * left : ソートを行う範囲の開始点
 * right : ソートを行う範囲の終了点
 * work[] : ソートを行うために必要な作業メモリ
 */
void mergeSort(int data[], int left, int right, int work[]) {
    int mid;


    /* データ数が１の場合はソート済みなのでソート終了 */
    if (left == right) {
        return;
    }

    /* 集合を中央で２つに分割する */
    /* left ? mid の集合と
        mid+1 ? right の集合に分割 */
    mid = (left + right) / 2;

    /* 分割後の各集合のデータをそれぞれソートする */
    mergeSort(data, left, mid, work);
    mergeSort(data, mid + 1, right, work);

    /* ソート済みの各集合をマージする */
    merge(data, left, mid, right, work);
}

/* 配列を初期化する関数 */
void initArray(int a[]) {
    a[0] = 5;
    a[1] = 0;
    a[2] = 9;
    a[3] = 7;
    a[4] = 1;
    a[5] = 6;
    a[6] = 3;
    a[7] = 8;
    a[8] = 4;
    a[9] = 2;
}

int main(void) {
    int array[NUM];
    int work[NUM];

    /* 配列を初期化 */
    initArray(array);

    /* ソート前の配列の表示 */
    printArray(array, NUM);

    /* マージソート */
    mergeSort(array, 0, NUM - 1, work);

    /* ソート後の配列の表示 */
    printArray(array, NUM);

    return 0;
}