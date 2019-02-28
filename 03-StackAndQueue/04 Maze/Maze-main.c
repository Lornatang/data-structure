/*********************************
 *						         *
 * �ļ���: ��03 ջ�Ͷ���\04 Maze *
 * 						         *
 * ��  ��: �Թ���غ�������      *
 *                               *
 *********************************/

#include "Maze.c"  //**��03 ջ�Ͷ���**//

int main(int argc, char *argv[]) {
  MazeType maze[N][N];
  PosType start, end;
  SElemType_Sq e;
  char Re = 'Y';

  while (Re == 'Y' || Re == 'y') {
    InitMaze(maze, &start, &end);  //��ʼ���Թ������������
    ShowMaze(maze);                //��ʾ�Թ��ĳ�ʼ״̬
    MazePath(maze, start, end);  //�Թ�Ѱ·

    printf("���ã���Y/N����");
    scanf("%c", &Re);
  }

  return 0;
}
