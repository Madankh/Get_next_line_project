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
    char buf[256];
    int chars_read;
    fd = open("file.txt" , O_RDWR | O_CREAT);
    while ((chars_read = read(fd, buf, 5)))
    {
        buf[chars_read] = '\0';
        printf("buf-> %s \n", buf);
    }
    
    
}