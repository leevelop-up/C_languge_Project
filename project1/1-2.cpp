/*#include <stdio.h>
int main(void)
{
 //부호가 없는 정수형 배열의 변수 선언
	int coin[15]={0,};
 //무한 while문 시작
 for(;;)
 {
  //금액 입력
  printf("KPG Drink Vending Mcoinchine 프로그램 \n");
  printf("금액을 넣어주세요. : ");
  scanf_s("%d", &coin[0]);
  //자판기에서 판매되는 음료보다 금액이 적으면
  for ( ; coin[0] < 500; )
  {
   printf("\n금액이 부족합니다. \n");
   printf("금액을 더 넣어주세요. : ");
   scanf_s("%d", &coin[9]);
   coin[0] = coin[0] + coin[9];
   printf("\n현재금액: %d원 \n", coin[0]);
  }
  
  //음료 선택
  printf("\n1.실론티 600원  2.솔의눈 600원  3.레쓰비 500원 \n");
  printf("음료수를 선택하세요. : ");
  scanf_s("%d", &coin[1]);
  //지정된 음료외에 선택시
  for ( ; coin[1] > 3; )
  {
   coin[1]=0;
   printf("\n음료수 선택을 잘못 하셨습니다. 다시 선택하세요. \n\n");
   printf("1.실론티 600원  2.솔의눈 600원  3.레쓰비 500원 \n");
   printf("음료수를 다시 선택하세요. : ");
   scanf_s("%d", &coin[1]);
  }
  //음료 선택후 음료값 지정
  if ( coin[1] == 1 ) { coin[4] = 600; }
  if ( coin[1] == 2 ) { coin[5] = 600; }
  if ( coin[1] == 3 ) { coin[6] = 500; }
  //음료수 수량 선택
  printf("\n음료수 수량을 선택하세요. : ");
  scanf_s("%d", &coin[2]);
  //수량 선택후 집계를 위한 음료수 수량금액 중간 계산
  if ( coin[1] == 1 ) { coin[4] = 600; coin[3]= coin[2] * coin[4]; }
  if ( coin[1] == 2 ) { coin[5] = 600; coin[3]= coin[2] * coin[5]; }

  if ( coin[1] == 3 ) { coin[6] = 500; coin[3]= coin[2] * coin[6]; }
  
  //금액보다 음료수 수량금액이 더많을 경우
  for ( ; coin[0] < coin[3]; )
  {
   coin[3] = 0;
   printf("\n금액이 부족합니다.\n");
   printf("음료수 수량을 다시 선택하세요. : ");
   scanf_s("%d", &coin[2]);
   coin[3] = coin[0] * coin[2];
  }
  
  //마지막 최종 계산
  if ( coin[1] == 1 )
  {
   printf("실론티 %d개 를 선택하였고 남은 금액은 %d원 입니다. \n\n", coin[2], coin[0]-coin[3]);
  }
  else if ( coin[1] == 2 )
  {
   printf("솔의눈 %d개 를 선택하였고 남은 금액은 %d원 입니다. \n\n", coin[2], coin[0]-coin[3]);
  }
  else if ( coin[1] == 3 )
  {
   printf("레쓰비 %d개 를 선택하였고 남은 금액은 %d원 입니다. \n\n", coin[2], coin[0]-coin[3]);
  }
 }

 return 0;}

*/