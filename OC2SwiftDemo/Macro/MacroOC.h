//
//  MacroOC.h
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/6.
//  Copyright © 2017年 陈博文. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kIOS7   [UIDevice currentDevice].systemVersion.doubleValue>=7.0 ? 1 :0
#define kIOS8   [UIDevice currentDevice].systemVersion.doubleValue>=8.0 ? 1 :0
#define kScreenHeight     [UIScreen mainScreen].bounds.size.height
#define kScreenWidth      [UIScreen mainScreen].bounds.size.width

//全局静态变量和宏只是在每个类中,如果在一个类中定义一个全局静态变量或者宏;在另外一个 全局静态变量或者宏 钟定义另外一个 全局静态变量或者宏; 那么会提示重定义
//变量都是可以修改的,一般定义过全局变量后就不在进行修改了

#define Test @"MacroOC"
static NSString * const testString = @"testString";
FOUNDATION_EXTERN NSString * const testStringExternal;
