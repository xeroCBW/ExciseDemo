//
//  SwiftDelegateViewController.swift
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/12.
//  Copyright © 2017年 陈博文. All rights reserved.
//

import Foundation

@objc protocol SwiftDelegateViewControllerDelegate:class {
    
    func didClickView(_ view:UIView)
    
    
    }

@objc class SwiftDelegateViewController: UIViewController{
    
 public weak var delegate:SwiftDelegateViewControllerDelegate?
 public var numberTest:NSNumber?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.view.backgroundColor = UIColor.white
        
        self.setUpButtons()
    }
    
    
    func setUpButtons(){
        
        
        let button = UIButton(frame: CGRect(x: 20, y: 100, width: 200, height: 40))
        button.setTitle("OC 中实现 swift 的代理", for: UIControlState.normal)
        button.setTitleColor(UIColor.red, for: UIControlState.normal)
        button.addTarget(self, action: #selector(ocImplementSwiftProtocol), for: UIControlEvents.touchUpInside)
        
        let button1 = UIButton(frame: CGRect(x: 20, y: 200, width: 200, height: 40))
        button1.setTitle("swift 中实现 OC 的代理", for: UIControlState.normal)
        button1.setTitleColor(UIColor.red, for: UIControlState.normal)
        button1.addTarget(self, action: #selector(swiftImplementOCProtocol), for: UIControlEvents.touchUpInside)

        
        self.view.addSubview(button)
        self.view.addSubview(button1)
    
    }
    
    
    func ocImplementSwiftProtocol() {
        
        //swift 中不用 responseToSeletor
        self.delegate?.didClickView(self.view)
    }
    
    func swiftImplementOCProtocol() {
        
        let vc = TestOCDeletegateViewController()
        
        vc.delegate = self
        
        self.navigationController?.pushViewController(vc, animated: true)
        
        
    }
}

extension SwiftDelegateViewController:TestOCDeletegateViewControllerDelegate{
    
    func say() {
        
        print("\(#function):swift implement oc protocol")
       
        
    }
}


