#include<stdio.h>	// необходимо подключать первой - базовые функции для работы с файлами
#include<iostream>	// oперации ввода/вывода выполняются
#include<cmath>		// работа с дробными числами
#include<locale.h>	// подключает кириллицу

int main()			// Эта строка сообщает компилятору, что есть функция с именем main
{
	setlocale(LC_ALL, ""); //  подключает ввозможность вывода текста кириллицей

						   // Task 1.

						   /*float x, a, sum;
						   printf("\nВведите кол-во конфет в кг : ");
						   scanf_s("%f", &x);
						   printf("Введите стоимость за кг конфет в тг : ");
						   scanf_s("%f", &a);
						   sum = x*a;
						   printf("\nСтоимоcть вашей покупки составляет %f тенге за %f кг конфет\n\n", sum, x);*/


						   // Task 2.

						   /*float a, b, x, count=1;

						   do
						   {
						   count++;
						   printf("Введите A = ");
						   scanf_s("%f",&a);
						   printf("Введите B = ");
						   scanf_s("%f",&b);

						   if (a != 0)
						   {
						   x = -b / a;
						   printf("\nУравнение A * x + B = 0, при A = %f и B= %f \n", a, b);
						   printf("\nОтвет x= %f\n\n", x);
						   }
						   else
						   {
						   printf("\nВы ввели A=0, A не должно быть равным 0. Повторите ввод данных\n\n");
						   }
						   } while (count < 4);*/

						   // Task 3.

						   /*int sec;

						   printf("Введите кол-во прошедших секунд с начала суток = ");
						   scanf_s("%d", &sec);

						   printf("\nС начала суток прошло полных минут : %d \n\n", sec / 60);*/



						   // Task 4.   

						   /*float v1, v2, s, S, Sdif, t;

						   printf("Скорость авто №1 в км/ч : ");
						   scanf_s("%f", &v1);
						   printf("Скорость авто №1 в км/ч : ");
						   scanf_s("%f", &v2);
						   printf("Введите время движения авто в ч : ");
						   scanf_s("%f", &t);

						   S = 100;			// расстояние между авто
						   s = t * (v1 + v2);
						   Sdif = abs(S - s);

						   printf("\nРасстояние между авто через указанное время %f \n", Sdif);*/

						   // Task 4. 

						   /*int a, b, c, V, Sside;

						   printf("\nВведите стороны параллелепипеда a, b, c:\n");
						   scanf_s("%d %d %d", &a,&b,&c);
						   //printf("Скорость авто №1 в км/ч : ");
						   //scanf_s("%f", &b);

						   V = a * b * c;
						   Sside = 2 * c*(a + b);
						   printf("\nЗаданный параллелепипед имеет:\nОбъем V = %d  \nПлощадь боковой стороны Sбок = %d \n\n", V, Sside);*/

						   // Task 5.



	system("pause");
}