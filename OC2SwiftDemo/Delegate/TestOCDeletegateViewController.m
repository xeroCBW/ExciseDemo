//
//  OCDeletegateViewController.m
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/12.
//  Copyright © 2017年 陈博文. All rights reserved.
//

#import "TestOCDeletegateViewController.h"

@interface TestOCDeletegateViewController ()

@end

@implementation TestOCDeletegateViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    self.view.backgroundColor = [UIColor whiteColor];
    
}


-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    if ([self.delegate respondsToSelector:@selector(say)]) {
        
        [self.delegate say];
    }
}






@end
