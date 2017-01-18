//
//  ViewController.m
//  TestObjectForIndexDemo
//
//  Created by 陈博文 on 17/1/13.
//  Copyright © 2017年 陈博文. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@property (nonatomic, strong)NSMutableArray *listArr;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    
    //我还是 test 创建的代码一
    //我还是 test 创建的代码二
    
    
    
    
    //使用新功能,创建一个分支
    
    //测试使用一个新功能第二次
    
    //创建新建的功能
    
    //创建新的功能2
    
    
    
    
    
    //新建功能三,采用变基的方式
    
    //cbw 开发完成
    
    
}


-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    self.listArr = [NSMutableArray array];
    
    [self.listArr addObject:@"111"];
    
    NSLog(@"%@",self.listArr[1]);
    

}


@end
