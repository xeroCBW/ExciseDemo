//
//  MacroSwift.swift
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/6.
//  Copyright © 2017年 陈博文. All rights reserved.
//

import Foundation
import UIKit

//放在类之外的叫全局变量
//放在类内部的局部变量
//计算属性和属性观察器所描述的功能也可以用于全局变量和局部变量。全局变量是在函数、方法、闭包或任何类型之外定义的变量。局部变量是在函数、方法或闭包内部定义的变量。
//OC 中想要访问 swift 的全局变量,需要使用一个类,用 objc 修饰,然后暴露出 objc 的方法
//定义两个相同的全局变量,结果是两个都会报错
let kScreenHeight = UIScreen.main.bounds.size.height
let kScreenWidth = UIScreen.main.bounds.size.width
let kIOS7 = (UIDevice().systemVersion as NSString).doubleValue >= 7.0 ? 1 :0
let kIOS8 = (UIDevice().systemVersion as NSString).doubleValue >= 8.0 ? 1 :0


class MacroSwift: NSObject{
    
   class func say (){
    
    print(UIDevice().systemVersion)
    print(kIOS7)
    }
    
    
}
