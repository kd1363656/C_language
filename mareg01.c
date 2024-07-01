#include <stdio.h>
#include <stdlib.h> /* memcpy�p */

/* �f�[�^�̐� */
#define NUM 10

/* �z��̃f�[�^��\������֐� */
void printArray(int a[], int num) {
    int i;
    for (i = 0; i < num; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

/* �Q�̏W�����}�[�W����֐�
 * data[] : �}�[�W���s���f�[�^�̏W��
 *         (�}�[�W��̃f�[�^�̏W�����i�[)
 * left : �}�[�W����P�ڂ̏W���͈͂̊J�n�_
 * mid : �}�[�W����P�ڂ̏W���͈̔͂̏I���_
 * right : �}�[�W����Q�ڂ̏W���͈̔͂̏I���_
 * work[] : �}�[�W���s�����߂ɕK�v�ȍ�ƃ�����
 *          (�}�[�W��W���Ƃ��Ĉꎞ�ޔ��Ƃ��Ďg�p)
 */
void merge(int data[], int left, int mid, int right, int work[]) {
    int i, j, k, size;

    /* �P�ڂ̏W���̊J�n�_���Z�b�g */
    i = left;

    /* �Q�ڂ̏W���̊J�n�_���Z�b�g */
    j = mid + 1;

    /* �}�[�W��W���̊J�n�_���Z�b�g */
    k = 0;

    /* �Q�̏W���̂ǂ��炩���S�ă}�[�W�ς݂ɂȂ�܂Ń��[�v */
    while (i <= mid && j <= right) {
        /* �}�[�W�ς݃f�[�^�𔲂����Q�̏W����
           �擪�̃f�[�^�̏����������}�[�W */
        if (data[i] < data[j]) {
            work[k] = data[i];
            /* �}�[�W�����W���̃C���f�b�N�X��
               �}�[�W��W���̃C���f�b�N�X���C���N�������g */
            i++;
            k++;
        }
        else {
            work[k] = data[j];
            /* �}�[�W�����W���̃C���f�b�N�X��
               �}�[�W��W���̃C���f�b�N�X���C���N�������g */
            j++;
            k++;
        }
    }

    /* �}�[�W�ς݂łȂ��f�[�^���c���Ă���W����
       �}�[�W��W���Ƀ}�[�W */
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

    /* �}�[�W��W���̃T�C�Y���v�Z */
    size = right - left + 1;

    /* �}�[�W��W����data�ɃR�s�[ */
    memcpy(&data[left], work, sizeof(int) * size);
}

/* �}�[�W�\�[�g���s���֐�
 * data[] : �\�[�g���s���f�[�^�̏W��
 *          (�\�[�g��̃f�[�^�̏W�����i�[)
 * left : �\�[�g���s���͈͂̊J�n�_
 * right : �\�[�g���s���͈͂̏I���_
 * work[] : �\�[�g���s�����߂ɕK�v�ȍ�ƃ�����
 */
void mergeSort(int data[], int left, int right, int work[]) {
    int mid;


    /* �f�[�^�����P�̏ꍇ�̓\�[�g�ς݂Ȃ̂Ń\�[�g�I�� */
    if (left == right) {
        return;
    }

    /* �W���𒆉��łQ�ɕ������� */
    /* left ? mid �̏W����
        mid+1 ? right �̏W���ɕ��� */
    mid = (left + right) / 2;

    /* ������̊e�W���̃f�[�^�����ꂼ��\�[�g���� */
    mergeSort(data, left, mid, work);
    mergeSort(data, mid + 1, right, work);

    /* �\�[�g�ς݂̊e�W�����}�[�W���� */
    merge(data, left, mid, right, work);
}

/* �z�������������֐� */
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

    /* �z��������� */
    initArray(array);

    /* �\�[�g�O�̔z��̕\�� */
    printArray(array, NUM);

    /* �}�[�W�\�[�g */
    mergeSort(array, 0, NUM - 1, work);

    /* �\�[�g��̔z��̕\�� */
    printArray(array, NUM);

    return 0;
}