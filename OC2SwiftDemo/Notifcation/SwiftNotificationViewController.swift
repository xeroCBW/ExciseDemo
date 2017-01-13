//
//  SwiftNotificationDemo.swift
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/12.
//  Copyright © 2017年 陈博文. All rights reserved.
//

import Foundation


let notificationName = Notification.Name("notificationName")

class SwiftNotificationViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.view.backgroundColor = UIColor.white
    }
    
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        
        NotificationCenter.default.post(name: .yourCustomNotificationName, object: nil)
    }
}

extension Notification.Name{

    static let yourCustomNotificationName = Notification.Name("yourCustomNotificationName")

}
