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
    
    
}


-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    self.listArr = [NSMutableArray array];
    
    [self.listArr addObject:@"111"];
    
    NSLog(@"%@",self.listArr[1]);
    

}


@end
