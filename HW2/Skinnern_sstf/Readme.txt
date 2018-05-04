

//**USE THE FOLLOWING:

qemu-system-i386 -gdb tcp::5507 -nographic -S -kernel OS2-group7/arch/i386/boot/bzImage -drive files/core-image-lsb-sdk-qemux86.ext4 -enable-kvm -net none -usb -localtime --no-reboot --append "root=/dev/hda rwconsole=ttyS0 debug"

//to make kernel:
make -j4 all

//to access to the config:
make menuconfig

//access kernel
gdb
target remote:5507








//can ignore this:

//old one
qemu-system-i386 -gdb tcp::5507 -S -nographic -kernel bzImage-qemux86.bin -drive file=core-image-lsb-sdk-qemux86.ext4,if=virtio -enable-kvm -net none -usb -localtime --no-reboot --append "root=/dev/vda rw console=ttyS0 debug".
//run these:
//bash/zsh
source /scratch/opt/environment-setup-i586-poky-linux
//csh/tcsh
source /scratch/opt/environment-setup-i586-poky-linux.csh 


