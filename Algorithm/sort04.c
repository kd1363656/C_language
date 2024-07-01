#include <stdio.h>
//シェルソートによる昇順ソート

//データ数を定義
#define DCNT 8

main()
{
	int d[DCNT] = {70,60,80,50,40,20,30,10};
	int i, j;
	int w;
	int gap;

	//　シェルソート
	gap = DCNT / 2; //全データ数/2で司書の比較間隔を求める

	while (gap > 0) {

		for (i = gap; i < DCNT; i++) {
			for (j = i - gap; j >= 0; j -= gap) {

				//確認用に表示
				int k;
				for (k = 0; k < DCNT; k++) {
					printf("%d ", d[k]);
				}
				printf("\n");

				if (d[j + gap] < d[j]) { //j + gap番目とj番目と比較
					//d[j]とd[j + gap]
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else {
					break;
				}

			}

		}



		gap = gap / 2;  //比較感覚を半分にする
		printf("----------------------\n"); //確認用に表示

	}
		for(i = 0; i < DCNT; i++) {
			printf("%d ", d[i]);
		}

	

}