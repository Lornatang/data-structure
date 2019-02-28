/**************************************
 *                                    *
 * �ļ���: ��03 ջ�Ͷ���\07 LinkQueue *
 *                                    *
 * ��  ��: ������غ�������           *
 *                                    *
 *************************************/

#include <stdio.h>
#include "LinkQueue.c"  //**03 ջ�Ͷ���**//

void PrintElem(QElemType_L e);  //���Ժ�������ӡ����

int main(int argc, char **argv) {
  LinkQueue Q;
  int i;
  QElemType_L e;

  printf("��1\n������ InitQueue_L ����...\n");  // 1.����InitQueue_L����
  {
    printf("��ʼ������ Q ...\n");
    InitQueue_L(&Q);
    printf("\n");
  }
  PressEnter;

  printf("��4\n������ QueueEmpty_L ����...\n");  // 4.����QueueEmpty_L����
  {
    QueueEmpty_L(Q) ? printf(" Q Ϊ�գ���\n") : printf(" Q ��Ϊ�գ�\n");
    printf("\n");
  }
  PressEnter;

  printf("��7\n������ EnQueue_L ����...\n");  // 7.����EnQueue_L����
  {
    for (i = 1; i <= 6; i++) {
      printf("Ԫ�� \"%2d\" ��ӣ�", 2 * i);
      EnQueue_L(&Q, 2 * i);
      printf("���ۼƵ� %d ��Ԫ�أ�...\n", QueueLength_L(Q));
    }
    printf("\n");
  }
  PressEnter;

  printf("��9\n������ QueueTraverse_L ����...\n");  // 9.����QueueTraverse_L����
  {
    printf(" Q �е�Ԫ��Ϊ��Q = ");
    QueueTraverse_L(Q, PrintElem);
    printf("\n\n");
  }
  PressEnter;

  printf("��8\n������ DeQueue_L ����...\n");  // 8.����DeQueue_L����
  {
    DeQueue_L(&Q, &e);
    printf("��ͷԪ�� \"%d\" ����...\n", e);
    printf(" Q �е�Ԫ��Ϊ��Q = ");
    QueueTraverse_L(Q, PrintElem);
    printf("\n\n");
  }
  PressEnter;

  printf("��5\n������ QueueLength_L ����...\n");  // 5.����QueueLength_L����
  {
    i = QueueLength_L(Q);
    printf(" Q �ĳ���Ϊ %d \n", i);
    printf("\n");
  }
  PressEnter;

  printf("��6\n������ GetHead_L ����...\n");  // 6.����GetHead_L����
  {
    GetHead_L(Q, &e);
    printf("��ͷԪ�ص�ֵΪ \"%d\" \n", e);
    printf("\n");
  }
  PressEnter;

  printf("��3\n������ ClearQueue_L ����...\n");  // 3.����ClearQueue_L����
  {
    printf("��� Q ǰ��");
    QueueEmpty_L(Q) ? printf(" Q Ϊ�գ���\n") : printf(" Q ��Ϊ�գ�\n");
    ClearQueue_L(&Q);
    printf("��� Q ��");
    QueueEmpty_L(Q) ? printf(" Q Ϊ�գ���\n") : printf(" Q ��Ϊ�գ�\n");
    printf("\n");
  }
  PressEnter;

  printf("��2\n������ DestroyQueue_L ����...\n");  // 2.����DestroyQueue_L����
  {
    printf("���� Q ǰ��");
    Q.front != NULL &&Q.rear != NULL ? printf(" Q ���ڣ�\n")
                                     : printf(" Q �����ڣ���\n");
    DestroyQueue_L(&Q);
    printf("���� Q ��");
    Q.front != NULL &&Q.rear != NULL ? printf(" Q ���ڣ�\n")
                                     : printf(" Q �����ڣ���\n");
    printf("\n");
  }
  PressEnter;

  return 0;
}

void PrintElem(QElemType_L e) { printf("%d ", e); }
