#include "header.h"
#include "settings.h"

/*
	0: 꽝, 1: 보물, 2: 상점, 3: 홀짝, 4: 참참참,
    5: 연타, 6: 가위바위보, 7: 스나이퍼,
    8: 업다운, 9: 아이템 빨리 먹기, 10: 타자연습,
    11: 퀴즈
*/

void gameStarter(int gameID, int* coin, int* key, int keyStandard, int* chance, int* isGameCleared, int* isStageCleared, time_t startTime, int standardTime) {
    int rewardCoin = 0, isCleared = 0;
    switch (gameID) {
    case -2:
        *key += 1;
        break;
    case -1:
        *isStageCleared = 1;
        break;
    case 0: {
        dud();
        break;
    }
    case 1: {
        treasure(*key, keyStandard, isStageCleared, startTime, standardTime);
        break;
    }
    case 2: {
        store(coin, key, chance);
        break;
    }
    case 3: {
        isCleared = holZzak();
        rewardCoin = random_range(20, 35);
        break;
    }
    case 4: {
        isCleared = chamCham();
        rewardCoin = random_range(27, 40);
        break;
    }
    case 5: {
        isCleared = pressKey();
        rewardCoin = random_range(30, 40);
        break;
    }
    case 6: {

        isCleared = rockScissorsPaper();
        rewardCoin = random_range(25, 40);
        break;
    }
    case 7: {
        isCleared = sniper();
        rewardCoin = random_range(30, 40);
        break;
    }
    case 8: {
        isCleared = upDown();
        rewardCoin = random_range(30, 42);
        break;
    }
    case 9: {
        isCleared = itemQuickPick();
        rewardCoin = random_range(33, 45);
        break;
    }
    case 10: {
        isCleared = typingPractice();
        rewardCoin = random_range(40, 53);
        break;
    }
    case 11: {
        isCleared = quiz();
        rewardCoin = random_range(35, 45);
        break;
    }
    }
    clear();
    if (isCleared) {
        reward(coin, key, *chance, rewardCoin, isGameCleared[gameID]);
        isGameCleared[gameID] = 1;
        clear();
    }
}