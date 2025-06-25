#include <stdio.h>

void del_digit(char str[])
{
	/* ここにコードを追加 */
    int i = 0, j = 0;
    while (str[i] != '\0') {       // 文字列の終端までループ
        if (str[i] < '0' || str[i] > '9') { // 数字でない場合
            str[j++] = str[i];     // 数字でない文字を前に詰める
        }
        i++;
    }
    str[j] = '\0'; // 新しい終端を設定
    
}

int main(void)
{ 
	char str[100];
	printf("文字列を入力してください：str = ");
	fgets("%s",str);

    // 改行だけ、または空行だった場合のチェック
	if (str[0] == '\n' || strlen(str) == 0) {
		printf("入力が空です。終了します。\n");
		return 1;
	}

	// 入力末尾に改行が含まれていたら削除
	str[strcspn(str, "\n")] = '\0';

	
	printf("数字の削除！\n");
	
	del_digit(str);
	
	printf("str = %s\n",str);
	
	return(0);
}