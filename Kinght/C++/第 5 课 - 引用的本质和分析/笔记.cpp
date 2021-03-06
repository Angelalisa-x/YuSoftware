应用的意义：
    引用作为变量别名而存在，因此在一些场合可以代替指针
    引用相对于指针来说具有更好的可读性和实用性


特殊引用：
    const 引用
        const Type& name = var;
        const 引用让变量拥有只读属性

            int a = 3;
            const int& b = a;
            int* p = (int*)&b;
            b = 5; //Error, 只读变量
            *p = 5; //ok，修改变量 a 的值

        当使用常量 const 引用进行初始化时，C++编译器会为常量值分配空间，并将引用作为这段空间的别名 
            const int& b = 1;   //分配 4 个字节空间，b 是编译器分配空间的别名
            int* p = (int*)&b;
            b = 5;  //Error,只读变量
            *p = 5; //ok，修改变量 b 的值

    引用 和 指针一样 占用 4 个字节