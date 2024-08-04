#include "main.h"

/**
 * 
 * 
 * 
 * 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

void error_exit(int code, const char *message, const char *filename);

int main(int argc, char *argv[]) {
    int fd_from, fd_to;
    ssize_t n_read, n_written;
    char buffer[1024];

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        error_exit(98, "Error: Can't read from file", argv[1]);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1) {
        error_exit(99, "Error: Can't write to", argv[2]);
    }

    while ((n_read = read(fd_from, buffer, sizeof(buffer))) > 0) {
        n_written = write(fd_to, buffer, n_read);
        if (n_written == -1 || n_written != n_read) {
            error_exit(99, "Error: Can't write to", argv[2]);
        }
    }

    if (n_read == -1) {
        error_exit(98, "Error: Can't read from file", argv[1]);
    }

    if (close(fd_from) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return 0;
}

void error_exit(int code, const char *message, const char *filename) {
    dprintf(STDERR_FILENO, "%s %s\n", message, filename);
    exit(code);
}
