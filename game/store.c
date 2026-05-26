#include "../header.h"
#include "../settings.h"

void store(int* coin, int* keys, int* chance) {
	clear();
    printf("[ 상점 ]\n\n");
    printf("자라에게서 필요한 아이템을 구매할 수 있습니다!\n\n");
    printf("상점에 들어가려면 스페이스를 누르세요. \n나가려면 ESC를 누르세요.\n");

    if (spaceToStart()) {
        clear();

        printAsciiXY(storeBanner, 0, 0);
        printBox(0, 7, "확률 10% 업 쿠폰 (200코인)", 0);
        printBox(0, 10, "열쇠 (500코인)", 0);
        printBox(0, 13, "나가기", 0);

        struct coord coords[3] = { {3, 8}, {3, 11}, {3, 14} };
        while (1) {
            goToXY(37, 9);
            printf("[ 나의 정보 ]");
            goToXY(37, 11);
            printf("열쇠 : %3d개", *keys);
            goToXY(37, 12);
            printf("코인 : %3d개", *coin);
            goToXY(37, 13);
            printf("확률 : %3d%%", *chance);

            int select = selectValue(coords, 3);
            goToXY(38, 15);
            if (select == 0) {
                if (*coin >= 200) {
                    *coin -= 200;
                    *chance += 10;
                    printf("구매 완료!");
                }
                else {
                    printf("코인 부족!");
                }
            }
            else if (select == 1) {
                if (*coin >= 500) {
                    *coin -= 500;
                    (*keys)++;
                    printf("구매 완료!");
                }
                else {
                    printf("코인 부족!");
                }
            }
            else if (select == 2) {
                break;
            }
        }
    }
}