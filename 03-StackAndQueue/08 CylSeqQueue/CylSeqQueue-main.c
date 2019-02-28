/****************************************
 *                                      *
 * �ļ���: ��03 ջ�Ͷ���\08 CylSeqQueue *
 *                                      *
 * ��  ��: ѭ��������غ�������         *
 *                                      *
 ****************************************/

#include <stdio.h>
#include "CylSeqQueue.c"  //**��03 ջ�Ͷ���**//

void PrintElem(QElemType_CSq e);  //���Ժ�������ӡ����

int main(int argc, char **argv) {
  CSqQueue Q;
  int i;
  QElemType_CSq e;

  printf("��1\n������ InitQueue_CSq ����...\n");  // 1.����InitQueue_CSq����
  {
    printf("��ʼ��ѭ��˳����� Q ...\n");
    InitQueue_CSq(&Q);
    printf("\n");
  }
  PressEnter;

  printf("��4\n������ QueueEmpty_CSq ����...\n");  // 4.����QueueEmpty_CSq����
  {
    QueueEmpty_CSq(Q) ? printf(" Q Ϊ�գ���\n") : printf(" Q ��Ϊ�գ�\n");
    printf("\n");
  }
  PressEnter;

  printf("��7\n������ EnQueue_CSq ����...\n");  // 7.����EnQueue_CSq����
  {
    for (i = 1; i <= 6; i++) {
      printf("Ԫ�� \"%2d\" ���Q��", 2 * i);
      EnQueue_CSq(&Q, 2 * i);
      printf("���ۼƵ� %d ��Ԫ�أ�...\n", QueueLength_CSq(Q));
    }
    printf("\n");
  }
  PressEnter;

  printf(
      "��9\n������ QueueTraverse_CSq ����...\n");  // 9.����QueueTraverse_CSq����
  {
    printf(" Q �е�Ԫ��Ϊ��Q = ");
    QueueTraverse_CSq(Q, PrintElem);
    printf("\n\n");
  }
  PressEnter;

  printf("��8\n������ DeQueue_CSq ����...\n");  // 8.����DeQueue_CSq����
  {
    DeQueue_CSq(&Q, &e);
    printf("��ͷԪ�� \"%d\" ����...\n", e);
    printf(" Q �е�Ԫ��Ϊ��Q = ");
    QueueTraverse_CSq(Q, PrintElem);
    printf("\n\n");
  }
  PressEnter;

  printf("��5\n������ QueueLength_CSq ����...\n");  // 5.����QueueLength_CSq����
  {
    i = QueueLength_CSq(Q);
    printf(" Q �ĳ���Ϊ %d \n", i);
    printf("\n");
  }
  PressEnter;

  printf("��6\n������ GetHead_CSq ����...\n");  // 6.����GetHead_CSq����
  {
    GetHead_CSq(Q, &e);
    printf("��ͷԪ�ص�ֵΪ \"%d\" \n", e);
    printf("\n");
  }
  PressEnter;

  printf("��3\n������ ClearQueue_CSq ����...\n");  // 3.����ClearQueue_CSq����
  {
    printf("��� Q ǰ��");
    QueueEmpty_CSq(Q) ? printf(" Q Ϊ�գ���\n") : printf(" Q ��Ϊ�գ�\n");
    ClearQueue_CSq(&Q);
    printf("��� Q ��");
    QueueEmpty_CSq(Q) ? printf(" Q Ϊ�գ���\n") : printf(" Q ��Ϊ�գ�\n");
    printf("\n");
  }
  PressEnter;

  printf(
      "��2\n������ DestroyQueue_CSq ����...\n");  // 2.����DestroyQueue_CSq����
  {
    printf("���� Q ǰ��");
    Q.base != NULL ? printf(" Q ���ڣ�\n") : printf(" Q �����ڣ���\n");
    DestroyQueue_CSq(&Q);
    printf("���� Q ��");
    Q.base != NULL ? printf(" Q ���ڣ�\n") : printf(" Q �����ڣ���\n");
    printf("\n");
  }
  PressEnter;

  return 0;
}

void PrintElem(QElemType_CSq e) { printf("%d ", e); }
