//
//  SwiftClosureTestViewController.swift
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/12.
//  Copyright © 2017年 陈博文. All rights reserved.
//

import Foundation

@objc class SwiftClosureTestViewController: UIViewController {
    
    var callback: ((_ dataString: String) -> ())?
    
    override func viewDidLoad() {
        
        super.viewDidLoad()
        
        self.view.backgroundColor  = UIColor.white
        
        self.setUpButton()
    }
    
    
    func setUpButton()  {
        
        let button = UIButton(frame: CGRect(x: 20, y: 100, width: 300, height: 40))
        button.setTitle("OC 中实现 swift 的closure", for: UIControlState.normal)
        button.setTitleColor(UIColor.red, for: UIControlState.normal)
        button.addTarget(self, action: #selector(closureDidCall), for: UIControlEvents.touchUpInside)
        
        self.view.addSubview(button)
        
    }
    
    
    func closureDidCall(){
        
        self.callback!("执行 closure")
        
    }
    
}
