#include<stdio.h>
int main()
{
int m;
int i;
double a, b, y0;
double xn, yn, xn1, yn1, yn1b;
double h, tmp;
printf("�����������������a,b��ֵ:");
scanf("%lf%lf", &a, &b);
printf("������y0��ֵ:");
scanf("%lf", &y0);
printf("������m��������ֳ�m�ȷ�:");
scanf("%d", &m);
if (m <= 0)
{
printf("��������ڣ�����\n");
return 1;
}
h = (b - a) / m;
xn = a;
yn = y0;
for (i = 1; i <= m; i++)
{
xn1 = xn + h;
yn1b = yn + h * (xn, yn);
yn1 = yn + h / 2 * ((xn, yn) + (xn1, yn1b));
printf("x%d=%lf,y%d=%lf\n", i, xn1, i, yn1);
xn = xn1;
yn = yn1;
}
return 0;
}
