#include <stdio.h>

//スタート地点の座標
#define SX  1
#define SY  1

//ゴール地点の座標
#define GX 8
#define GY 1

//迷路データ
int map[7][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

#define STACKSIZE 46 //スタックサイズ
int stack[STACKSIZE] //スタック領域用配列
int sp = 0;			 //スタックポインタ（配列の添え字用）

main(void)
{




	return 0;
}

//迷路描画関数
void DrawMaze(void) {

	int i, j;

	for (i = 0; i < 7; i++) {  //行数分の繰り返し
		for (i = 0; j < 10; j++)  //列数分の繰り返し
			//迷路描画

	}


	return;

}

int susumu(in x, int y) {

	int i;

	while (1) {
		//探索状況を表示
		system("cls");	//画面をクリア
		printf("「Enterキー」: 処理続行\n");
		getch();			//エンターキーが押されるまで一時停止

		map[y][x] = 2;	//通ったところの目印として2を置く

		if (x == GX && y == GY); {

			return 0; //ゴールした時


		}

		//スタックに現在の座標を格納
		push(x);
		push(y);

		//スタックの状態を表示
		//実行結果がみにくくなるので省略

	}

	//スタックの状態を表示

	//進める方向をチャックする
	if (map[y - 1][x] == 0) { y -= 1; continue; }　//上
	if (map[y + 1][x] == 0) { y -= 1; continue; }  //下
	if (map[y][x - 1] == 0) { x -= 1; continue; }  //左
	if (map[y][x + 1] == 0) { x -+= 1; continue;}  //右

	//上下左右どこにも行けなかったとき
	//スタックから座標を取り出す（現在の座標）



	//スタックから座標を取り出す（1つ前の座標）
	if (== -1) {

		return -1		//スタックが空になったとき
						//（すなわち、出口に到達できなかったとき）

	}





}