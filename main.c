#include <stdio.h>
#include <math.h>

void main() 
{
	float a, b, c; //длины сторон треугольника
	float p, S; //полупериметр, площадь
	float tax_rate = 10; //ставка налога за единицу площади за 1 м^2
	float tax; //налог
	int flag, count;
	do
	{
		do
		{
			int ch;
			printf("Enter the lengths of the sides: ");
			flag = 0;
			count = scanf_s("%f %f %f", &a, &b, &c);
			while (ch = getchar() != '\n');
			if (count < 3)
				flag = 1;
			if ((a <= 0) || (b <= 0) || (c <= 0))
				flag = 1;
			if ((a + b <= c) || (a + c <= b) || (b + c <= a))
				flag = 1;
		} while (flag);
		p = (a + b + c) / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
		tax = S * tax_rate;
		printf("Tax = %f", tax);
		printf("Next (1|0)?");
		scanf_s("%d", &flag);
	} while (flag == 1);
}

/*int add(int first_num, int second_num) {
    int result = first_num + second_num;
    return result;
}
    int a = 4, b = 5;
    int c = add(a, b);*/
#include <stdio.h>
#include <limits.h>
/*//факториал
//N! = 1 * 2 * 3 * ... * N
//1! = !
//N! = N * (N - 1)!
void main() {
	int i, N, F;
	int flag, count, ch;
	do {
		flag = 0;
		printf("Enter N (N<=13): ");
		count = scanf_s("%d", &N);
		if (count == 0) {
			flag = 1;
			while (ch = getchar() != '\n')
				;
		}
		else
			flag = N > 13;
		if (flag != 0) 
			printf("Error! N > 13! \n");
	} while (flag);
	i = F = 1;
	while (i < N) {
		i += 1;
		F = F * i;
	}
	printf("N! = %d", F);
}*/
/*
#include <stdio.h>

int main() {
	int k, value = 1; 

	printf("Enter k: ");
	scanf_s("%d", &k);

	while (1) {
		if (value >= k) break; 
		printf("%d ", value);
		value += 2;

		if (value < k) {
			printf("-%d ", value);
			value += 2; 
		}
	}

	printf("\n"); 
	return 0;
}*/
#include <stdio.h>

int main() {
	int k, count = 0, value = 1;

	printf("Enter k: ");
	scanf_s("%d", &k);
	printf("%d ", value);
	while (1) {
		if (abs(value) >= k) break;

		if (value < k) {
			value = (abs(value) + 2) * (-1);
			count += 1;
			if (count % 2 == 0) {
				value *= -1;
			}

			printf("%d ", value);
			
		}
		
	}

	printf("\n");
	return 0;
}


