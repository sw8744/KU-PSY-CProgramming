#include "header.h"
#include "settings.h"

/*
	0: 꽝, 1: 보물, 2: 상점, 3: 홀짝, 4: 가위바위보,
	5: 참참참 4방향, 6: 키 여러번 누르기, 7: 0 ~ 100 업다운,
	8: 네모칸 안에 멈추기, 9: 아이템 빨리 먹기, 10: 타자연습,
	11: 퀴즈
*/

void gameStarter(int gameID, int* coin, int* key, int keyStandard, int* chance, int* isGameCleared, int* isStageCleared, time_t startTime, int standardTime) {
	int rewardCoin = 0, isCleared = 0;
	switch (gameID) {
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
		rewardCoin = 20;
		break;
	}
	case 4: {
		isCleared = rockScissorsPaper();
		rewardCoin = 25;
		break;
	}
	case 5: {
		isCleared = chamCham();
		rewardCoin = 30;
		break;
	}
	case 6: {
		isCleared = pressKey();
		rewardCoin = 35;
		break;
	}
	case 7: {
		isCleared = upDown();
		rewardCoin = 40;
		break;
	}
	case 8: {
		isCleared = sniper();
		rewardCoin = 45;
		break;
	}
	case 9: {
		isCleared = itemQuickPick();
		rewardCoin = 50;
		break;
	}
	case 10: {
		isCleared = typingPractice();
		rewardCoin = 55;
		break;
	}
	case 11: {
		isCleared = quiz();
		rewardCoin = 60;
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