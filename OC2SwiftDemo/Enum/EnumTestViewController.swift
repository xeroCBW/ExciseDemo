//
//  EnumTestViewController.swift
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/6.
//  Copyright © 2017年 陈博文. All rights reserved.
//

import Foundation


class EnumTestViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        view.backgroundColor = UIColor.white

    
        print("\(ShareType.WeiBo)")
        print(ShareType.WeiBo)
        print(ShareType.WeiBo.hashValue)
        
        let plant:Int = Planet.neptune.rawValue

        print(plant)
        
        print(kIOS7)
        
        
        MacroSwift.say()
    }

}
