#include <stdlib.h>
#include <time.h>




int rand3(){

	srand(time(NULL));

	int n = 3;
	int r = rand() % n;

	return r;
}




int janken(int te,int r){

//	int = r;

	if((te == 0 && r == 0)|| (te == 1 && r == 1) ||  (te == 2 && r == 2)){
		puts("あいこ");
		return 0;
	}
	else if ((te == 0 && r == 1 )|| (te == 1 && r == 2) ||  (te == 2 && r == 0) ){
		puts("あなたの勝ち");
		return 1;
	}
	else{
		puts("あなたの負け");
		return 2;
	}

}

int n = 3;


int isJanken(int n){

	if(n == 0 || n == 1 ||n == 2){
		return 1;
	}
	return 0;

}




int main(void)
{
	int te;

	printf("あなたの手を0:グー、1:チョキ、2:パー");
	fflush(0);
	scanf("%d", &te);


	int cp_te = rand3();

	janken(te, cp_te);


}
