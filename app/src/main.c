#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include "camera.h"

int main()
{
    struct stat st;
    int ret;

    printf("USB Camera Framework Started\n");

    if (stat("/dev/video0", &st) != 0)
    {
        printf("No camera device found at /dev/video0\n");
        return -1;
    }

    ret = camera_open("/dev/video0");

    if (ret < 0)
    {
        printf("Camera open failed\n");
        return -1;
    }

    camera_close();

    return 0;
}
