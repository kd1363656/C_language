#include<stdio.h>
#define  MapNum  3  //�}�b�v�̐�
#define  W 10		//�}�b�v�̉�(10�}�Y)
#define  H 5		//�}�b�v�̏c(5�}�X)

typedef struct {

	int m_map[H][W];

}Map;

//�I�������}�b�v�f�[�^��z��ɃZ�b�g����֐�
void SetMap(char* filename, Map* m);
//�}�b�v�f�[�^��\������֐�
void DrawMap(Map m);

int main() {

	Map MapData;
	char* MapFileName[MapNum] = { "map0.txt","map1.txt","map2.txt" };
	int select;

	printf("�\���}�b�v�́H(0,1,2) > ");
	scanf("%d", &select);
	if (select >= 0 && select <= 2) {

		SetMap(MapFileName[select], &MapData);
		DrawMap(MapData);
	}
	else {

		printf("�f�[�^�Ȃ񂩂˂���");

	}

}

void SetMap(char* filename,Map* m){

	FILE* fp;
	char ch;
	int i,j;
	if (fp = fopen(filename, "r")) {

		for (i = 0; i < H; i++) {

			for (j = 0; j < W; j++) {

				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';

			}
			fgetc(fp);
		}

		fclose(fp);

	}
	else {

		printf("�ǂݍ��ݎ��s");

	}


}

void DrawMap(Map m) {

	int i, j;
	for (i = 0; i < H;i++) {

		for (j = 0; j < W; j++) {

			if (m.m_map[i][j] == 1) {

				printf("��");

			}
			else {

				printf(" ");

			}


		}

		printf("\n");

	}

}