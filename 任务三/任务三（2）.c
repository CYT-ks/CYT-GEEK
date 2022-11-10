#include<stdio.h>

int NOT(int A);
int AND(int A, int B);
int NAND(int A, int B);
int OR(int A, int B);
int NOR(int A, int B);
int XOR(int A, int B);
int XNOR(int A, int B);
void HALF_ADDER(int A,int B,int *ADDER);
void FULL_ADDER(int A,int B,int C,int *ADDER);

int main(void)
{
	int A,B,C=0,S;
	int ADDER[2];//0-CARRY;1-SUM;
	
	printf("������״̬A��״̬B�� ");
	scanf("%d%d",&A,&B);
	
	S=NOT(A);
	printf("\nִ�� ����  A'  ����Ϊ��");
	printf("%d",S);
	S=AND(A,B);
	printf("\nִ�� ����  A*B  ����Ϊ��");
	printf("%d",S);
	S=NAND(A,B);
	printf("\nִ�� �����  (A*B)'  ����Ϊ��");
	printf("%d",S);
	S=OR(A,B);
	printf("\nִ�� ����  A+B  ����Ϊ��");
	printf("%d",S);
	S=NOR(A,B);
	printf("\nִ�� ����� (A+B)'����Ϊ��");
	printf("%d",S); 
	HALF_ADDER(A,B,ADDER);
	printf("\n����� ִ�� �ӷ� ���� ��λ Ϊ��");
	printf("%d",ADDER[0]); 
	printf("\n����� ִ�� �ӷ� ���� �� Ϊ��");
	printf("%d",ADDER[1]); 
	FULL_ADDER(A,B,C,ADDER);
	printf("\nȫ���� ִ�� �ӷ� ���� ��λ Ϊ��");
	printf("%d",ADDER[0]); 
	printf("\nȫ���� ִ�� �ӷ� ���� �� Ϊ��");
	printf("%d",ADDER[1]); 
	return 0;
}


int NOT(int A)//���� 
{
	int An;
	
	An=1-A;
		
	return An;
}

int AND(int A, int B)//���� 
{
	int AandB;
	
	if(A*B==0)
	{
		AandB=0;
	}
	else
		AandB=1;
		
	return AandB;
	
}

int NAND(int A, int B)//����� 
{
	int AnandB;
	
	if(A*B==1)
	{
		AnandB=0;
	}
	else
		AnandB=1;
		
	return AnandB;
}

int OR(int A, int B)//���� 
{
	int AorB;
	
	if(A+B==0)
	{
		AorB=0;
	}
	else
		AorB=1;
		
	return AorB;
}

int NOR(int A, int B)//����� 
{
	int AnorB;
	
	if(A+B==0)
	{
		AnorB=1;
	}
	else
		AnorB=0;
		
	return AnorB;
}

int XOR(int A, int B)//����� 
{
	int AxorB;
	
	if(A==B)
	{
		AxorB=0;
	}
	else
		AxorB=1;
		
	return AxorB;
	
}

int XNOR(int A, int B)//ͬ���� 
{
	int AnxorB;
	
	if(A==B)
	{
		AnxorB=1;
	}
	else
		AnxorB=0;
		
	return AnxorB;
}

void HALF_ADDER(int A,int B,int *ADDER)//����� 
{
	ADDER[0]=AND(A,B);
	ADDER[1]=XOR(A,B);
}

void FULL_ADDER(int A,int B,int C,int *ADDER)//ȫ���� 
{
	int FULL_ADDER[2];//0-CARRY;1-SUM;
	HALF_ADDER(A,B,ADDER);
	HALF_ADDER(ADDER[1],C,FULL_ADDER);
	ADDER[0]=OR(ADDER[0],FULL_ADDER[0]);
	ADDER[1]=FULL_ADDER[1];
} 








