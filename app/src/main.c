#include <stdio.h>
#include "camera.h"

int main()
{
    int ret;

    printf("USB Camera Framework Started\n");

    ret = camera_open("/dev/video0");

    if (ret < 0)
    {
        printf("Camera open failed\n");
        return -1;
    }

    camera_close();

    return 0;
}
