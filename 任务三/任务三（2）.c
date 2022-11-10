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
	
	printf("请输入状态A与状态B： ");
	scanf("%d%d",&A,&B);
	
	S=NOT(A);
	printf("\n执行 非门  A'  操作为：");
	printf("%d",S);
	S=AND(A,B);
	printf("\n执行 与门  A*B  操作为：");
	printf("%d",S);
	S=NAND(A,B);
	printf("\n执行 与非门  (A*B)'  操作为：");
	printf("%d",S);
	S=OR(A,B);
	printf("\n执行 或门  A+B  操作为：");
	printf("%d",S);
	S=NOR(A,B);
	printf("\n执行 或非门 (A+B)'操作为：");
	printf("%d",S); 
	HALF_ADDER(A,B,ADDER);
	printf("\n半加器 执行 加法 操作 进位 为：");
	printf("%d",ADDER[0]); 
	printf("\n半加器 执行 加法 操作 和 为：");
	printf("%d",ADDER[1]); 
	FULL_ADDER(A,B,C,ADDER);
	printf("\n全加器 执行 加法 操作 进位 为：");
	printf("%d",ADDER[0]); 
	printf("\n全加器 执行 加法 操作 和 为：");
	printf("%d",ADDER[1]); 
	return 0;
}


int NOT(int A)//非门 
{
	int An;
	
	An=1-A;
		
	return An;
}

int AND(int A, int B)//与门 
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

int NAND(int A, int B)//与非门 
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

int OR(int A, int B)//或门 
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

int NOR(int A, int B)//或非门 
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

int XOR(int A, int B)//异或门 
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

int XNOR(int A, int B)//同或门 
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

void HALF_ADDER(int A,int B,int *ADDER)//半加器 
{
	ADDER[0]=AND(A,B);
	ADDER[1]=XOR(A,B);
}

void FULL_ADDER(int A,int B,int C,int *ADDER)//全加器 
{
	int FULL_ADDER[2];//0-CARRY;1-SUM;
	HALF_ADDER(A,B,ADDER);
	HALF_ADDER(ADDER[1],C,FULL_ADDER);
	ADDER[0]=OR(ADDER[0],FULL_ADDER[0]);
	ADDER[1]=FULL_ADDER[1];
} 








