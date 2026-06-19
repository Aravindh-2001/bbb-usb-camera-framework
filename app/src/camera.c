#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

static int cam_fd = -1;

int camera_open(const char *dev)
{
    cam_fd = open(dev, O_RDWR);

    if (cam_fd < 0)
    {
        perror("open");
        return -1;
    }

    printf("Camera opened successfully\n");

    return 0;
}

void camera_close(void)
{
    if (cam_fd >= 0)
    {
        close(cam_fd);
        cam_fd = -1;
    }
}
