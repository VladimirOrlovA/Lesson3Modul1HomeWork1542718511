#include<stdio.h>	// ���������� ���������� ������ - ������� ������� ��� ������ � �������
#include<iostream>	// o������� �����/������ �����������
#include<cmath>		// ������ � �������� �������
#include<locale.h>	// ���������� ���������

int main()			// ��� ������ �������� �����������, ��� ���� ������� � ������ main
{
	setlocale(LC_ALL, ""); //  ���������� ������������ ������ ������ ����������

						   // Task 1.

						   /*float x, a, sum;
						   printf("\n������� ���-�� ������ � �� : ");
						   scanf_s("%f", &x);
						   printf("������� ��������� �� �� ������ � �� : ");
						   scanf_s("%f", &a);
						   sum = x*a;
						   printf("\n������c�� ����� ������� ���������� %f ����� �� %f �� ������\n\n", sum, x);*/


						   // Task 2.

						   /*float a, b, x, count=1;

						   do
						   {
						   count++;
						   printf("������� A = ");
						   scanf_s("%f",&a);
						   printf("������� B = ");
						   scanf_s("%f",&b);

						   if (a != 0)
						   {
						   x = -b / a;
						   printf("\n��������� A * x + B = 0, ��� A = %f � B= %f \n", a, b);
						   printf("\n����� x= %f\n\n", x);
						   }
						   else
						   {
						   printf("\n�� ����� A=0, A �� ������ ���� ������ 0. ��������� ���� ������\n\n");
						   }
						   } while (count < 4);*/

						   // Task 3.

						   /*int sec;

						   printf("������� ���-�� ��������� ������ � ������ ����� = ");
						   scanf_s("%d", &sec);

						   printf("\n� ������ ����� ������ ������ ����� : %d \n\n", sec / 60);*/



						   // Task 4.   

						   /*float v1, v2, s, S, Sdif, t;

						   printf("�������� ���� �1 � ��/� : ");
						   scanf_s("%f", &v1);
						   printf("�������� ���� �1 � ��/� : ");
						   scanf_s("%f", &v2);
						   printf("������� ����� �������� ���� � � : ");
						   scanf_s("%f", &t);

						   S = 100;			// ���������� ����� ����
						   s = t * (v1 + v2);
						   Sdif = abs(S - s);

						   printf("\n���������� ����� ���� ����� ��������� ����� %f \n", Sdif);*/

						   // Task 4. 

						   /*int a, b, c, V, Sside;

						   printf("\n������� ������� ��������������� a, b, c:\n");
						   scanf_s("%d %d %d", &a,&b,&c);
						   //printf("�������� ���� �1 � ��/� : ");
						   //scanf_s("%f", &b);

						   V = a * b * c;
						   Sside = 2 * c*(a + b);
						   printf("\n�������� �������������� �����:\n����� V = %d  \n������� ������� ������� S��� = %d \n\n", V, Sside);*/

						   // Task 5.



	system("pause");
}