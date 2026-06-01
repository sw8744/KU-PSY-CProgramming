#include "header.h"
#include "settings.h"

void initSound() {
    mciSendStringA("open \".\\sounds\\success.wav\" type waveaudio alias successSound", NULL, 0, NULL);
    mciSendStringA("open \".\\sounds\\beep.wav\" type waveaudio alias beepSound", NULL, 0, NULL);
    mciSendStringA("open \".\\sounds\\clear.wav\" type waveaudio alias clearSound", NULL, 0, NULL);
    mciSendStringA("open \".\\sounds\\coin_collect.wav\" type waveaudio alias coinCollectSound", NULL, 0, NULL);
    mciSendStringA("open \".\\sounds\\fail.wav\" type waveaudio alias failSound", NULL, 0, NULL);
    mciSendStringA("open \".\\sounds\\get_key.wav\" type waveaudio alias getKeySound", NULL, 0, NULL);
    mciSendStringA("open \".\\sounds\\coin_shaking.wav\" type waveaudio alias coinShakingSound", NULL, 0, NULL);
}

void playSuccessSound(void) {
    mciSendStringA("play successSound from 0", NULL, 0, NULL);
}

void playBeepSound() {
    mciSendStringA("play beepSound from 0", NULL, 0, NULL);
}

void playClearSound() {
    mciSendStringA("play clearSound from 0", NULL, 0, NULL);
}

void playCoinCollectSound() {
    mciSendStringA("play coinCollectSound from 0", NULL, 0, NULL);
}

void playFailSound() {
    mciSendStringA("play failSound from 0", NULL, 0, NULL);
}

void playGetKeySound() {
    mciSendStringA("play getKeySound from 0", NULL, 0, NULL);
}

void playCoinShakingSound() {
    mciSendStringA("play coinShakingSound from 0", NULL, 0, NULL);
}