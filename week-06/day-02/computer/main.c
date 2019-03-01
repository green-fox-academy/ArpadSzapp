#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer
{
    char* name;
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct
{
    char *name;
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main ()
{
    struct Computer homePC;
    homePC.name="Granma is awesome";
    homePC.bits = 32;
    homePC.cpu_speed_GHz = 1.4;
    homePC.ram_size_GB = 8;

    struct Computer gamerPC;
    gamerPC.name="My son can't make a sandwich";
    gamerPC.bits = 64;
    gamerPC.cpu_speed_GHz = 4.5;
    gamerPC.ram_size_GB = 32;


    Notebook ACER1;
    ACER1.name = " ACER SWIFT 1 SF113-31-P3BY ";
    ACER1.ram_size_GB = 4;
    ACER1.cpu_speed_GHz = 2.5;
    ACER1.bits = 32;

    printf("Your Computer name is: %s speed is: %.3f (GHz), ram size is: %d GB, and the operating system type is %d bits\n",
           gamerPC.name, gamerPC.cpu_speed_GHz, gamerPC.ram_size_GB, gamerPC.bits);

    printf("\nYour Computer name is: %s speed is: %.3f (GHz), ram size is: %d GB, and the operating system type is %d bits\n",
           homePC.name,homePC.cpu_speed_GHz, homePC.ram_size_GB, homePC.bits);

    printf("\nYour Notebook type is: %s, the speed is: %.3f (GHz), ram size is: %d GB, and the operating system type is %d bits\n",
           ACER1.name, ACER1.cpu_speed_GHz, ACER1.ram_size_GB, ACER1.bits);

    return 0;
}

