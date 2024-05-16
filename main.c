#include<unistd.h>
#include<stdbool.h>
#include<ctype.h>
#include<errno.h>
#include<float.h>
#include<limits.h>
#include<math.h>
#include<stdarg.h>
#include<stdio.h>
#include<stddef.h>
#include<string.h>
#include<time.h>
#include<wchar.h>
#include<fcntl.h>

int main(){
    int fd;
    fd = open("file.txt" , O_RDWR | O_CREAT);
    // printf("fd of file", "%d\n", fd);
    write(1,"hello", 5);
    write(fd, "Hello", 5);
}