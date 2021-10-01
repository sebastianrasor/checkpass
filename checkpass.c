/*
 * checkpass - Verifies a password against a bcrypt hash
 * Written in 2021 by Sebastian Riley Rasor
 *
 * To the extent possible under law, the author(s) have dedicated all
 * copyright and related and neighboring rights to this software to the
 * public domain worldwide. This software is distributed without any
 * warranty.
 *
 * You should have received a copy of the CC0 Public Domain Dedication
 * along with this software. If not, see
 * <http://creativecommons.org/publicdomain/zero/1.0/>.
 */

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
