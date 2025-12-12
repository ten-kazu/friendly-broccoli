#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    
    char password[100];
    
    printf("パスワードを入力してください: ");
    scanf("%s", password);

    int len = strlen(password);

    int has_upper = 0;
    int has_lower = 0; 

    for (int i = 0; i < len; i++) {
       
        if (isupper(password[i])) {
            has_upper = 1;
        }
      
        if (islower(password[i])) {
            has_lower = 1;
        }
    }

    printf("\n 判定結果 \n");

    if (len >= 8 && has_upper == 1 && has_lower == 1) {
        printf("強いパスワードです。\n");
    } else {
        printf("弱いパスワードです。以下の点を改善してください：\n");
        
        if (len < 8) {
            printf("・文字数が足りません（あと%d文字必要です）\n", 8 - len);
        }
        if (has_upper == 0) {
            printf("・大文字が含まれていません\n");
        }
        if (has_lower == 0) {
            printf("・小文字が含まれていません\n");
        }
    }

    return 0;
}