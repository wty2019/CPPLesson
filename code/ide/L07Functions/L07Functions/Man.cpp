//
//  Man.cpp
//  L03Classes
//
//  Created by Lance on 14-9-27.
//  Copyright (c) 2014年 cn.babybus.com. All rights reserved.
//

#include "Man.h"

// 调用父类构造函数
// C++ 中没有Super关键字
Man::Man(int age):Person(age, 1){
    
}

void Man::sayHello(){
    
//     调用父类方法，比较强大
//    Person::sayHello();
    
    printf("Man say : Hello World\n");
}

void Man::eat(){
    printf("Man eat...\n");
}