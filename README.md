# FAST24_CVSS_Kernel
 The linux kernel for CVSS based on v5.15.
 
 ## Compiling Linux kernel
Here are the instructions on installing the kernel to the machine.

First, compile the kernel in the host using:

```bash
cd /media/tmp_nvme4/hostshare
git clone https://github.com/ZiyangJiao/FAST24_CVSS_Kernel.git
cd FAST24_CVSS_Kernel/linux-hwe-5.15-5.15.0
sudo apt update
sudo apt install bison flex libelf-dev fakeroot build-essential crash kexec-tools makedumpfile kernel-wedge libncurses5 libncurses5-dev libelf-dev asciidoc binutils-dev libudev-dev dwarves zstd
make -j$(nproc) bindeb-pkg
```

After compiling the kernel, three new `.deb` files for kernel installation will be created.

The folder `/media/tmp_nvme4/hostshare` can be used to transfer files between the host and the FEMU VM.
