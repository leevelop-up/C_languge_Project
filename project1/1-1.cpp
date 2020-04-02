#include <stdio.h>
int sel=0;
 void menu_select(void);
 int input_money(void);
 int input_sel(void);
 int input_num(void);
void print_goods(char menu[],int num,int change);
int main(void)
{
    int input=0, sel=0, num=0, total=0, change=0, i=0,sell=0;
    char *menu[9] = {"사이다","콜라","환타","밀키스","쥬스","보리차","데미소다","반환","확인" };
    int cost[9] = {400, 400, 500, 500, 500, 700, 800, 900};
    int goods[9] = {10,10,10,10,10,10,10};
 
 
 
	menu_select();
	for(;;){
	input=input_money();
	sel=input_sel();
	for (i = 0; i < 7; i++)

			if (sel == 8){
				printf("잔돈 가져가세요: %d원\n",input);
					goto A;}
				if (sel == 9) {printf("\t****재고****\n"); 
				  for (i = 0; i<=6; i++)
					printf("\t%s : %d\n", menu[i], goods[i]);			
					continue ;
				}
	num=input_num();
		  total = cost[sel] * num;
		 change = input - total;
        if (input < total) {
            printf("금액이 부족합니다.\n");   
		}else {
			printf("  ----------------\n");
			printf("｜	 마	 ｜\n");
			printf("｜	 시	 ｜\n");
			printf("｜	 쩡	 ｜\n");
			printf("｜	 !!	 ｜\n");
			printf("  ----------------\n");
			goods[sel-1] -= num;
			sell += total;
			input = 0;
			printf(" %s %d개\n거스름돈 %d원\n", menu[sel-1],num, change); 
        }
	}
A:
			printf("이제 그만 안녕\n"); 
    return 0;
	}
 
 
void menu_select(void){
	printf("-----------------------------------------------------------------------------\n");
	printf("사이다 ｜ 콜라 ｜ 환타 ｜밀키스｜ 쥬스  ｜ 보리차 ｜데미소다｜ 반환 ｜ 확인 ｜\n");
	printf(" 400원 ｜ 500원｜ 500원｜500원 ｜ 700원 ｜ 800원  ｜  900원 ｜      ｜      ｜\n");
	printf("(1번)  ｜(2번) ｜(3번) ｜(4번) ｜ (5번) ｜ (6번)  ｜ (7번)  ｜(8번) ｜(9번) ｜\n");
	printf("-----------------------------------------------------------------------------\n");
 
	return ;}
 
int input_money(void){
	int input=0;
		printf("\n돈을 넣어주세요\n금액 : ");
        scanf_s("%d", &input);
			
		return input;
}  
int input_sel(void){
	int sel=0;
        printf("뽑으실 음료를 선택 : ");
        scanf_s("%d", &sel);
		return sel;
}
		
		 //----------------------------------------------------------------------------
	
		//------------------------------------------------------------------------------------
int input_num(void){
	int num=0;
        printf("음료 갯수 : ");
		  scanf_s("%d", &num);
		  	return num;
}

	
