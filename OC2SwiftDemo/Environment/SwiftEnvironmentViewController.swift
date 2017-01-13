//
//  SwiftEnvironmentTest.swift
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/12.
//  Copyright © 2017年 陈博文. All rights reserved.
//

import Foundation

class SwiftEnvironmentViewController: UIViewController {
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        view.backgroundColor = UIColor.white
        
        self.say()
      
        
    }
    
      func say() {
        
        #if DEBUG
            
            print("debug")
        
        #else
            
            print("release")
        
        #endif
        
    }
    
 
    
    
}
