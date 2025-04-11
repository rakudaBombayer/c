#include <stdio.h>

double health(int a, double b){
//	double bmi;

	double x = (double)a / 100;


	return b / x * x;
}



int main(void)
{
	int tall ,weight;

	printf("身長を入力せよ : ");
	fflush(0);
	scanf("%d", &tall);

	printf("体重を入力せよ : ");
	fflush(0);
	scanf("%d", &weight);



//	printf("身長%dで体重%dのBMIは%.fです。", tall, weight ,health(tall, weight));

	float bmi = health(tall, weight);

	if(bmi < 18.6){
		 printf("痩せている (BMI: %.2f)\n", bmi);
	}
	else if(bmi < 25.0){
		printf("正常 (BMI: %.2f)\n", bmi);
	}
	else if(bmi < 30.0){
		 printf("太っている (BMI: %.2f)\n", bmi);
	}
	else {
		printf("肥満 (BMI: %.2f)\n", bmi);
	}


//	printf("身長%dで体重%dのBMIは%.fです。", tall, weight ,health(tall, weight));


	return 0;

}
