bool 布尔类型
    C 语言基础上新增的类型
    理论上 bool 占用 1 个字节
    C++ 中的 bool 可取的值只有 true（1）和 false（0）
    C++ 编译器会将非 0 的值转换成 true，0 值转换成 false
        bool a = 0; //0 = 0
        a++;        //1 = 1
        a = a - 3;  //-2 = 1

    
三目运算符
    a = 1;
    b = 2;
    (a > b ? a : b) = 3;    //a = 1; b = 3;
    (a > b ? 1 : b) = 3;    //Error
    C++ 中的三目运算符左值都是变量时，才可以当作左值使用（不能混搭）=》返回的是变量本身（变量引用）

& 引用
    引用可以看作一个已定义变量的别名
    语法：Type& name = Var;
        int a = 3;
        int& b = a;
        b = 5;  //a = b = 5;（地址是一样的）
    普通引用在定义时必须用同类型的变量进行初始化（必须初始化）




