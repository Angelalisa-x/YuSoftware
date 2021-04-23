主引导程序是软件
    - 一段存储在主引导区（MBR）中的有效代码
    - 并不是固化于硬件，属于操作系统代码的一部分
    - 汇编语言
    - 512 字节

无操作系统上编写打印功能
    - mov：赋值操作
        mov ax, 0
    - int：触发中断
        int 0x10：触发 0x10中断，对屏幕进行操作
    - hlt：停止运行，CPU 进入暂停状态，不执行任何操作
        hlt：是程序进入睡眠状态
    

验证 BIOS 主引导程序解决方案：
    - 将汇编源码编译为二进制机器码（nasm）
    - 创建虚拟盘（bximage）
    - 将二进制代码写入虚拟盘起始位置（dd）
    - 在虚拟机中将虚拟盘作为启动盘执行（vmware）

    实验原材料：
        - nasm
            . nasm boot asm -o boot.bin
        - bximage
            . bximage a.img -q -fd -size=1.44
        - dd 
            . dd if=boot.bin of=a.img bs=512 count=1 conv=notrunc

小结：
    主引导程序的代码量不能超过 512 字节
    主引导程序使用 汇编语言 开发
    主引导程序中通过BIOS中断使用硬件功能
    主引导程序运行于实模式（地址都是实际的物理地址）