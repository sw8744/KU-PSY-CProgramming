#include "header.h"
#include "settings.h"

void playSuccessSound() {
	PlaySound(TEXT("./sounds/success.wav"), 0, SND_FILENAME | SND_ASYNC);
}

void playBeepSound() {
	PlaySound(TEXT("./sounds/beep.wav"), 0, SND_FILENAME | SND_ASYNC);
}

void playClearSound() {
	PlaySound(TEXT("./sounds/clear.wav"), 0, SND_FILENAME | SND_ASYNC);
}

void playCoinCollectSound() {
	PlaySound(TEXT("./sounds/coin_collect.wav"), 0, SND_FILENAME | SND_ASYNC);
}

void playFailSound() {
	PlaySound(TEXT("./sounds/fail.wav"), 0, SND_FILENAME | SND_ASYNC);
}

void playGetKeySound() {
	PlaySound(TEXT("./sounds/get_key.wav"), 0, SND_FILENAME | SND_ASYNC);
}

void playCoinShakingSound() {
	PlaySound(TEXT("./sounds/coin_shaking.wav"), 0, SND_FILENAME | SND_ASYNC);
}