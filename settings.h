#define WIDTH_EASY 20
#define HEIGHT_EASY 10
#define FLAG_COUNT_EASY 5
#define DEFAULT_PLAYER_X_EASY 1
#define DEFAULT_PLAYER_Y_EASY HEIGHT_EASY - 2

#define WIDTH_NORMAL 30
#define HEIGHT_NORMAL 15
#define FLAG_COUNT_NORMAL 6
#define DEFAULT_PLAYER_X_NORMAL 1
#define DEFAULT_PLAYER_Y_NORMAL HEIGHT_NORMAL - 2

#define WIDTH_HARD 40
#define HEIGHT_HARD 20
#define FLAG_COUNT_HARD 7
#define DEFAULT_PLAYER_X_HARD 1
#define DEFAULT_PLAYER_Y_HARD HEIGHT_HARD - 2

#define STAGE_WALL "#"
#define FLAG "▶"
#define PLAYER "◆"

// dud
#define DUD_SECONDS 10

// itemQuickPick
extern void initItems(int width_max, int height_max, struct flag* items, int count, struct coord playerPos);
extern void move(struct coord playerPos, struct flag* items, int size);
extern int checkItem(int x, int y, struct flag* items, int size);

//typingPractice
#define NUM_SENTENCES 8
#define MAX_LENGTH 100
#define TIME_LIMIT 10.0 
