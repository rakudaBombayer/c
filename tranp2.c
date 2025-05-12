#include <stdio.h>
#include <time.h>

// スートの強さを定義
typedef enum {
    CLUB = 1,   // 一番弱い
    DIAMOND = 2,
    HEART = 3,
    SPADE = 4    // 一番強い
} Suit;

typedef enum {
    CARD_1 = 13,
    CARD_13 = 12,
    CARD_12 = 11,
    CARD_11 = 10,
    CARD_10 = 9,
    CARD_9 = 8,
    CARD_8 = 7,
    CARD_7 = 6,
    CARD_6 = 5,
    CARD_5 = 4,
    CARD_4 = 3,
    CARD_3 = 2,
    CARD_2 = 1
} num;



// カード構造体
typedef struct {
    Suit suit;   // スート (強さ順)
    int value;   // 数字 (1-13)
} Card;



const char* getSuitName(Suit suit) {
    switch(suit) {
        case CLUB: return "クラブ";
        case DIAMOND: return "ダイヤモンド";
        case HEART: return "ハート";
        case SPADE: return "スペード";
        default: return "UNKNOWN";  // 万が一のエラー対策
    }
}




int main() {

	Card deck[52];
	int deckSize = 52;
	int index = 0;

    // 各スートごとに13枚のカードを作成
    for (Suit s = CLUB; s <= SPADE; s++) {
        for (num v = CARD_2; v <= CARD_1; v++) {
            deck[index].suit = s;
            deck[index].value = v;
            index++;
        }
    }


    // 比較
    int stop;
    Card card1, card2;

    int player1countWin = 0, player1countLose = 0, player2countWin = 0, player2countLose = 0;

    // カード例
    Card getRandomCard() {

        int randIndex = srand(time(NULL)) % deckSize; // 使用可能なカードの範囲でランダム選択
        Card selectedCard = deck[randIndex];

        // 選んだカードをデッキから削除（配列の後ろのカードと交換してデッキサイズを減らす）
        deck[randIndex] = deck[deckSize - 1];
        deckSize--;

        return selectedCard;
    }

	srand(time(NULL));



    while(1){
        Card card1 = getRandomCard();
        printf("カード: %sの%d\n", getSuitName(card1.suit), card1.value);
        fflush(0);

        Card card2 = getRandomCard();
        printf("カード: %sの%d\n", getSuitName(card2.suit), card2.value);
        fflush(0);


        if (card1.value > card2.value) {
            printf("プレイヤー1の勝利\n");
            fflush(0);
            player1countWin++;
            player2countLose++;
        } else if(card1.value < card2.value) {
        	printf("プレイヤー2の勝利\n");
        	fflush(0);
        	player1countLose++;
        	player2countWin++;
        } else {
            if(card1.suit > card2.suit){
            	 printf("プレイヤー1の勝利\n");
            	fflush(0);
            	 player1countWin++;
            	 player2countLose++;
        	}

          else {
            	printf("プレイヤー2の勝利\n");
            	fflush(0);
            	player1countLose++;
                player2countWin++;
          }

        }

    	printf("もう一度対決しますか？[yes....1/ no....0]");
    	fflush(0);
    	scanf("%d", &stop);

    	if (deckSize == 0) break;

//    	1を入力させたら終了
    	if (stop == 0) break;

    }


	printf("プレイヤー1勝利数%d,負け数%d\n", player1countWin, player1countLose);
	fflush(0);

	printf("プレイヤー2勝利数%d,負け数%d\n", player2countWin, player2countLose);
	fflush(0);


	printf("残りのカード枚数%d\n", deckSize);
	fflush(0);


    return 0;
}
