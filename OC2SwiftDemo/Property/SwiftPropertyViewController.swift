//
//  SwiftPropertyViewController.swift
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/13.
//  Copyright © 2017年 陈博文. All rights reserved.
//

import Foundation



 class SwiftPropertyViewController: UIViewController {
    
    var age:NSNumber = 0
    var weight:NSNumber?
    var name: String?//会自动帮忙转换成 copy
    var height :Float?
    var GPA:Float = 0
    //weak var GPA1:Float = 0///Users/chenbowen/ExciseDemo/OC2SwiftDemo/Property/SwiftPropertyViewController.swift:20:10: 'weak' may only be applied to class and class-bound protocol types, not 'Float'
    //swift消除了 assign,全部用nsnumber 代替 基本数据类型
    //weak 不能使用
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.view.backgroundColor = UIColor.white
        
        self.setUpButton()
        
    }
    
    
    
    func setUpButton()  {
    
        let button = UIButton(frame: CGRect(x: 20, y: 100, width: 300, height: 50))
        button.setTitle("点我验证非 optional,OC 不能检查只会提醒, swift 能够检查的崩溃", for: UIControlState.normal)
        button.setTitleColor(UIColor.red, for: UIControlState.normal)
        button.addTarget(self, action: #selector(buttonDidClick), for: UIControlEvents.touchUpInside)
        
        self.view.addSubview(button)

    }
    
    
    func buttonDidClick() {
        
        //        self.age = nil//对于一个非 optional 的值来说,直接赋值为 nil,swift编译器能够发现;但是 oc 编译器不能发现
        //这样运行会崩溃
        print(self.age)
    }
    
    
}
