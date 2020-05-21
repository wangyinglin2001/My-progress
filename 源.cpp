#include <time.h>
#include <stdio.h>
#include<string.h>
#include<Windows.h>

/*--- µÈ´ýxºÁÃë ---*/
void telop(const char* s, int direction, int speed, int n) {
    int name_len = strlen(s);
    int cnt = 0;
    int i = 0;
    while (1) {
        putchar('\r');
        for (i = 0; i < name_len; i++) {
            if (cnt + i < name_len)
                putchar(s[cnt + i]);
            else
                putchar(s[cnt + i - name_len]);
        }
        fflush(stdout);
        Sleep(1000);
        if (direction == 1) {
            if (cnt > 0)
                cnt--;
            else
                cnt = name_len - 1;
        }
        else {
            if (cnt < name_len - 1)
                cnt++;
            else
                cnt = 0;
        }
        n--;
    }


}




int main(void)
{
    int choice;
    clock_t    c;
    char s[128];
    printf("ÊäÈë×Ö·û´®:");
    scanf("%s", s);
    printf("Ñ¡Ôñ´ÓÓÒÏò×ó----0.´Ó×óÏòÓÒ----1\n");
    scanf("%d", &choice);
    telop(s, choice, 1000, 3);
    return 0;
}