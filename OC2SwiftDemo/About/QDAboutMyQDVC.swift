//
//  QDAboutMyQDVC.swift
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/4.
//  Copyright © 2017年 陈博文. All rights reserved.
//

import Foundation
import UIKit

let reuseID = "reuseID"


 public class QDAboutMyQDVC: UIViewController {
    
    var tableView = UITableView(frame: CGRect(x: 0, y: 0, width: 0, height: 0), style: UITableViewStyle.grouped);
    
    
    public override func viewDidLoad() {
        
        super.viewDidLoad()
        
        print(self.listArr)
        
        self.setUpTableView();

    }
    
    
    func setUpTableView() {
        
        self.tableView.frame = self.view.bounds;
        self.tableView.delegate = self;
        self.tableView.dataSource = self;
        self.tableView.isScrollEnabled = false;
        
        self.view.addSubview(self.tableView)
        
        self.tableView.tableHeaderView = UCSAboutHeaderView();
        self.tableView.tableFooterView = UCSAboutFooterView();
        
        
        self.tableView.register(UITableViewCell.self, forCellReuseIdentifier: reuseID)
        
    }
    
    
    //MARK:懒加载
 
    
    lazy var listArr:NSMutableArray = {
        
        return [
            [
                ["title":"分享APP","des":""],
                ["title":"去打分","des":"欢迎吐槽更望鼓励"]
            ],
            [
                ["title":"欢迎页","des":""],
                ["title":"意见反馈","des":""],
                ["title":"服务热线","des":"400-113-1118"]
            ]
        ]
        
    }();
    

}

//MARK:delegate


extension QDAboutMyQDVC:UITableViewDelegate{
    
    public func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
    
        tableView.deselectRow(at: indexPath, animated: true)
        
        let str = "https://itunes.apple.com/cn/app/qian-duan-ding-zhi-ban-wen/id935532902?mt=8";
        UIApplication.shared.openURL(URL(string:str)!)
 
        
    }
    
    public func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        
        return 44.0;
    }
    
    public func tableView(_ tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        
        return 10.0;
    }
    
    public func tableView(_ tableView: UITableView, heightForFooterInSection section: Int) -> CGFloat {
        
        return 0.01;
    }

}
//MARK:datasource

extension QDAboutMyQDVC:UITableViewDataSource{
    
    public func numberOfSections(in tableView: UITableView) -> Int {
        return self.listArr.count;
    }
    
    public func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        
        let arr:NSArray = self.listArr[section] as! NSArray;
        
        return arr.count;
    }
    
    public func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let arr:NSArray = self.listArr[indexPath.section] as! NSArray;
        
        let dic:NSDictionary = arr[indexPath.row] as! NSDictionary;
        
        
        let cell = UITableViewCell(style: UITableViewCellStyle.value1, reuseIdentifier: nil)
        
//        let cell = tableView.dequeueReusableCell(withIdentifier: reuseID, for: indexPath)
        
        
        cell.accessoryType = UITableViewCellAccessoryType.disclosureIndicator
        
        let title = dic["title"];
        let  des = dic["des"];
        
        print("\(title)\(des)")
        
        cell.textLabel?.font = UIFont(name: (cell.textLabel?.font.fontName)!, size: 13)
        cell.detailTextLabel?.font = UIFont(name: (cell.detailTextLabel?.font.fontName)!, size: 13)

        cell.textLabel?.text = title as! String?;
        cell.detailTextLabel?.text = des as! String?;
        
        return cell
    }
}
