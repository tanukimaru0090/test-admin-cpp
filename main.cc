#include <stdio.h>
#include <stdlib.h>
int main(){
	system("chcp 65001");
	printf("このプログラムは管理者権限で実行されまーす");
	char c = getchar();
	return 0;
}
