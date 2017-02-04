//
//  ViewController.m
//  TestDemo
//
//  Created by 陈博文 on 17/2/4.
//  Copyright © 2017年 陈博文. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
[[NSNotificationCenter defaultCenter]postNotificationName:@"changeColor" object:nil];

    
}


@end
