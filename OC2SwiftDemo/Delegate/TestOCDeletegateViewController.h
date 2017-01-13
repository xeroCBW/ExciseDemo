//
//  OCDeletegateViewController.h
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/12.
//  Copyright © 2017年 陈博文. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TestOCDeletegateViewControllerDelegate <NSObject>

@optional

- (void)say;

@end

@interface TestOCDeletegateViewController : UIViewController

/** delegate*/
@property (nonatomic ,weak) id<TestOCDeletegateViewControllerDelegate> delegate;


@end
