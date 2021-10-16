On Linux with fdisk:

``` shell
$ fdisk -l # Check where the target disk:
$ fdisk /dev/sdX
> g # Using GPT on UEFI or `o' Using MBR on BIOS
> n # new a partition using entry disk
> # location of partition
> # first section of partition
> # last section of partition
# > t
> w
$ mkfs.vfat -F 32 /dev/sdX1 # format as fat32
$ mkdir -p /mnt/usb && mkdir -p /mnt/iso
$ mount -t msdos /dev/sdX1 /mnt/usb
$ mount -t isofs <your_cd_image_path> /mnt/iso
$ cp -r /mnt/iso/* /mnt/usb
$ umount /mnt/usb
```

<!-- MBR
In windows:
``` shell
$ diskpart
$ list disk
$ select disk N
$ list partition
$ select partition N
$ active
``` -->
