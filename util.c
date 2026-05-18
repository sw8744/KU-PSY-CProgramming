#include "header.h"
#include "settings.h"

int random_range(int min, int max) {
	return rand() % (max - min) + min;
}

void clear() {
	system("cls");
}

void clearPos(int x0, int y0, int x, int y) {
	for (int i = 0; i <= x - x0; i++) {
		for (int j = 0; j <= y - y0; j++) {
			goToXY(x0 + i, y0 + j);
			printf(" ");
		}
	}
}

int isNotMove(int x, int y, struct flag* flags, int flagSize, int width, int height) {
	if (x == width - 1 || x == 0 || y == height - 1 || y == 0) {
		return 1;
	}
	for (int i = 0; i < flagSize; i++) {
		if (x == flags[i].x && y == flags[i].y) {
			return 1;
		}
	}
	return 0;
}

int selectValue(struct coord* coords, int length) {
	int select = 0;
	while (1) {
		goToXY(coords[select].x, coords[select].y);
		if (coords[select].y >= 0) {
			printf("x\b");
			int ch = _getch();
			if (ch == 13) {
				goToXY(0, coords[length - 1].y + 2);
				return select;
			}
			if (ch == 224) {
				ch = _getch();
				switch (ch) {
				case 72:
					if (select > 0) {
						printf(" ");
						select--;
					}
					break;

				case 80:
					if (select < length - 1) {
						printf(" ");
						select++;
					}
					break;
				}
			}
		}
		else {
			if (select < length - 1) {
				select++;
			}
			else {
				select--;
			}
		}
	}
}


int spaceToStart() {
	while (1) {
		char ch = _getch();
		if (ch == 32) {
			return 1;
		}
		if (ch == 27) {
			return 0;
		}
	}
}

void escToExit() {
	while (1) {
		char ch = _getch();
		if (ch == 27) {
			break;
		}
	}
}