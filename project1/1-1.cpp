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
    char *menu[9] = {"���̴�","�ݶ�","ȯŸ","��Ű��","�꽺","������","���̼Ҵ�","��ȯ","Ȯ��" };
    int cost[9] = {400, 400, 500, 500, 500, 700, 800, 900};
    int goods[9] = {10,10,10,10,10,10,10};
 
 
 
	menu_select();
	for(;;){
	input=input_money();
	sel=input_sel();
	for (i = 0; i < 7; i++)

			if (sel == 8){
				printf("�ܵ� ����������: %d��\n",input);
					goto A;}
				if (sel == 9) {printf("\t****���****\n"); 
				  for (i = 0; i<=6; i++)
					printf("\t%s : %d\n", menu[i], goods[i]);			
					continue ;
				}
	num=input_num();
		  total = cost[sel] * num;
		 change = input - total;
        if (input < total) {
            printf("�ݾ��� �����մϴ�.\n");   
		}else {
			printf("  ----------------\n");
			printf("��	 ��	 ��\n");
			printf("��	 ��	 ��\n");
			printf("��	 ��	 ��\n");
			printf("��	 !!	 ��\n");
			printf("  ----------------\n");
			goods[sel-1] -= num;
			sell += total;
			input = 0;
			printf(" %s %d��\n�Ž����� %d��\n", menu[sel-1],num, change); 
        }
	}
A:
			printf("���� �׸� �ȳ�\n"); 
    return 0;
	}
 
 
void menu_select(void){
	printf("-----------------------------------------------------------------------------\n");
	printf("���̴� �� �ݶ� �� ȯŸ ����Ű���� �꽺  �� ������ �����̼Ҵ٣� ��ȯ �� Ȯ�� ��\n");
	printf(" 400�� �� 500���� 500����500�� �� 700�� �� 800��  ��  900�� ��      ��      ��\n");
	printf("(1��)  ��(2��) ��(3��) ��(4��) �� (5��) �� (6��)  �� (7��)  ��(8��) ��(9��) ��\n");
	printf("-----------------------------------------------------------------------------\n");
 
	return ;}
 
int input_money(void){
	int input=0;
		printf("\n���� �־��ּ���\n�ݾ� : ");
        scanf_s("%d", &input);
			
		return input;
}  
int input_sel(void){
	int sel=0;
        printf("������ ���Ḧ ���� : ");
        scanf_s("%d", &sel);
		return sel;
}
		
		 //----------------------------------------------------------------------------
	
		//------------------------------------------------------------------------------------
int input_num(void){
	int num=0;
        printf("���� ���� : ");
		  scanf_s("%d", &num);
		  	return num;
}

	
