C 语言中的 const
    const 修饰的变量是只读的、本质还是变量（运行时就失效）
    const 修饰的局部变量在栈上分配空间
    const 修饰的全局变量在只读存储区分配空间

C++ 语言中的 const
    碰见 const 声明时在符号表中放入常量
    编译过程从符号表中的值替换
    编译过程中若发现一下情况则给对应的常量分配存储空间
        对 const 常量使用 extern (全局，其它文件会使用)
        对 const 常量使用 & 操作符

    const 常量和宏定义（预处理）不同
        const 常量是由编译器处理
            进行类型和作用域等检查






