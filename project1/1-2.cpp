/*#include <stdio.h>
int main(void)
{
 //��ȣ�� ���� ������ �迭�� ���� ����
	int coin[15]={0,};
 //���� while�� ����
 for(;;)
 {
  //�ݾ� �Է�
  printf("KPG Drink Vending Mcoinchine ���α׷� \n");
  printf("�ݾ��� �־��ּ���. : ");
  scanf_s("%d", &coin[0]);
  //���Ǳ⿡�� �ǸŵǴ� ���Ẹ�� �ݾ��� ������
  for ( ; coin[0] < 500; )
  {
   printf("\n�ݾ��� �����մϴ�. \n");
   printf("�ݾ��� �� �־��ּ���. : ");
   scanf_s("%d", &coin[9]);
   coin[0] = coin[0] + coin[9];
   printf("\n����ݾ�: %d�� \n", coin[0]);
  }
  
  //���� ����
  printf("\n1.�Ƿ�Ƽ 600��  2.���Ǵ� 600��  3.������ 500�� \n");
  printf("������� �����ϼ���. : ");
  scanf_s("%d", &coin[1]);
  //������ ����ܿ� ���ý�
  for ( ; coin[1] > 3; )
  {
   coin[1]=0;
   printf("\n����� ������ �߸� �ϼ̽��ϴ�. �ٽ� �����ϼ���. \n\n");
   printf("1.�Ƿ�Ƽ 600��  2.���Ǵ� 600��  3.������ 500�� \n");
   printf("������� �ٽ� �����ϼ���. : ");
   scanf_s("%d", &coin[1]);
  }
  //���� ������ ���ᰪ ����
  if ( coin[1] == 1 ) { coin[4] = 600; }
  if ( coin[1] == 2 ) { coin[5] = 600; }
  if ( coin[1] == 3 ) { coin[6] = 500; }
  //����� ���� ����
  printf("\n����� ������ �����ϼ���. : ");
  scanf_s("%d", &coin[2]);
  //���� ������ ���踦 ���� ����� �����ݾ� �߰� ���
  if ( coin[1] == 1 ) { coin[4] = 600; coin[3]= coin[2] * coin[4]; }
  if ( coin[1] == 2 ) { coin[5] = 600; coin[3]= coin[2] * coin[5]; }

  if ( coin[1] == 3 ) { coin[6] = 500; coin[3]= coin[2] * coin[6]; }
  
  //�ݾ׺��� ����� �����ݾ��� ������ ���
  for ( ; coin[0] < coin[3]; )
  {
   coin[3] = 0;
   printf("\n�ݾ��� �����մϴ�.\n");
   printf("����� ������ �ٽ� �����ϼ���. : ");
   scanf_s("%d", &coin[2]);
   coin[3] = coin[0] * coin[2];
  }
  
  //������ ���� ���
  if ( coin[1] == 1 )
  {
   printf("�Ƿ�Ƽ %d�� �� �����Ͽ��� ���� �ݾ��� %d�� �Դϴ�. \n\n", coin[2], coin[0]-coin[3]);
  }
  else if ( coin[1] == 2 )
  {
   printf("���Ǵ� %d�� �� �����Ͽ��� ���� �ݾ��� %d�� �Դϴ�. \n\n", coin[2], coin[0]-coin[3]);
  }
  else if ( coin[1] == 3 )
  {
   printf("������ %d�� �� �����Ͽ��� ���� �ݾ��� %d�� �Դϴ�. \n\n", coin[2], coin[0]-coin[3]);
  }
 }

 return 0;}

*/