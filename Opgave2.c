#include<stdio.h>
#include"MyLib.h"
double a,b,answer,function;
int option;
int main(void)
{
setvbuf(stdout, NULL, _IONBF, 0);

	printf("Pick one of the following functions\n1.Add\n2.Substract\n3.Multiply\n4.Divide\n5.Sine\n6.Cosine\n");
	scanf("%i", &option);
		printf("You have picked option %i\n", option);

		switch (option)
			{
			case 1:{
					printf("Please select two numbers to add\n");
						scanf("%lf %lf", &a,&b);
						answer=addition(a,b);
				} break;

			case 2:{
					printf("Please select two numbers to substract\n");
									scanf("%lf %lf", &a,&b);
									answer=substraction(a,b);
				} break;
			case 3:{
					printf("Please select two numbers to multiply\n");
											scanf("%lf %lf", &a,&b);
											answer=multiplication(a,b);
				} break;
			case 4:{
					printf("Please select two numbers to divide\n");
											scanf("%lf %lf", &a,&b);
											answer=division(a,b);
				} break;
			case 5:{
					printf("Please insert a number to take the sine of\n");
											scanf("%lf", &a);
											answer=sine(a);
				} break;
			case 6:{
					printf("Please insert a number to take the cosine of\n");
											scanf("%lf", &a);
											answer=cosine(a);
			}
			}


//
//		if(option == 1)
//		{
//			printf("Please select two numbers to add\n");
//			scanf("%lf %lf", &a,&b);
//			answer=addition(a,b);
//		}
//
//		if(option == 2)
//				{
//					printf("Please select two numbers to substract\n");
//					scanf("%lf %lf", &a,&b);
//					answer=substraction(a,b);
//				}
//
//		if(option == 3)
//						{
//							printf("Please select two numbers to multiply\n");
//							scanf("%lf %lf", &a,&b);
//							answer=multiplication(a,b);
//						}
//		if(option == 4)
//						{
//							printf("Please select two numbers to divide\n");
//							scanf("%lf %lf", &a,&b);
//							answer=division(a,b);
//						}
	printf("The result is %lf",answer);

	return 0;
}

