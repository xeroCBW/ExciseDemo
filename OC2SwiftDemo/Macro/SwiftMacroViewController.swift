//
//  SwiftMacroViewController.swift
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/12.
//  Copyright © 2017年 陈博文. All rights reserved.
//

import Foundation

class SwiftMacroViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        view.backgroundColor = UIColor.white
        
        self.test()
        self.test01()
        
    }
    
    /// 一些基本的宏
    func test() {
        print("屏幕的宽为\(kScreenWidth)")
        print("目前版本是不是比 ios 7 高:\(kIOS7)")
        
    }
    
    
    
    /// 带有参数的宏
    func test01() {
        
        let color = RGBCOLOR(1.0,0.0,0.0)
        print(color)
        
    }
    
    
    /// 修改宏
    func modifyMacro() {
        
//        直接这样写会报错,相当于 const修饰
//        letString = "修改后"
//        print(letString)
        
    }
    
    
}
