#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	char password[72];

	scanf("%s", password);

	if (argc == 2) {
		return crypt_checkpass(password,argv[1]);
	} else if (argc > 2) {
		printf("Too many arguments\n");
		return 2;
	} else {
		printf("Needs argument\n");
		return 2;
	}
}
