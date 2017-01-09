//
//  EnumTestOCViewController.m
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/6.
//  Copyright © 2017年 陈博文. All rights reserved.
//

#import "EnumTestOCViewController.h"
#import "OC2SwiftDemo-Swift.h"
#import "MacroOC.h"

@interface EnumTestOCViewController ()

@end

//oc 的类和 swift 的类不要重名,否者会报重名的错误


@implementation EnumTestOCViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];

    [self testMacroAndValues2];
}

- (void)testMacroAndValues2{
    
    NSLog(@"%@",Test);
    NSLog(@"%@",testString);
    NSLog(@"%@",testStringExternal);
}


- (void)testEnum{
    
    CompassPoint point = CompassPointSouth;
    
    switch (point) {
        case CompassPointEast:
        {
            NSLog(@"%ld",(long)point);
        }
            break;
        case CompassPointWest:
        {
            NSLog(@"%ld",(long)point);
        }
            break;
        case CompassPointSouth:
        {
            NSLog(@"%ld",(long)point);
        }
            break;
        case CompassPointNorth:
        {
            NSLog(@"%ld",(long)point);
        }
            break;
        default:
            break;
    }

}


@end
