#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 *main - prints statement to standard error
 *
 * Return: 1
 */

int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int fd = open("/dev/stderr", O_WRONLY);

	if (fd == -1)
		return (1);

	write(fd, text, strlen(text));
	close(fd);

	return (1);
}
