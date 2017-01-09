//
//  AppDelegate.m
//  TestMMDrawerDemo
//
//  Created by 陈博文 on 16/12/7.
//  Copyright © 2016年 陈博文. All rights reserved.
//

#import "AppDelegate.h"
#import <MMDrawerController.h>
#import "MainViewController.h"
#import "LeftViewController.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    
    
    self.window = [[UIWindow alloc]initWithFrame:[UIScreen mainScreen].bounds];
    
    MainViewController *contentViewController = [[MainViewController alloc]init];

    UINavigationController *nav1 = [[UINavigationController alloc]initWithRootViewController:contentViewController];
    
    LeftViewController *left = [[LeftViewController alloc]init];
 
    
    MMDrawerController *drawViewController = [[MMDrawerController alloc]initWithCenterViewController:nav1 leftDrawerViewController:left];

    drawViewController.openDrawerGestureModeMask = MMOpenDrawerGestureModeNone;
    drawViewController.closeDrawerGestureModeMask = MMCloseDrawerGestureModeAll;
    drawViewController.showsShadow = NO;
    drawViewController.shouldStretchDrawer  = NO;
    drawViewController.maximumLeftDrawerWidth = [UIScreen mainScreen].bounds.size.width * 0.8;

    [drawViewController
     setDrawerVisualStateBlock:^(MMDrawerController *drawerController, MMDrawerSide drawerSide, CGFloat percentVisible) {
         
         //NSLog(@"%s---%f----%@",__func__,percentVisible,drawerController.centerViewController);
         
         UINavigationController *nav = (UINavigationController *)drawerController.centerViewController;
         MainViewController *vc = (MainViewController *)nav.visibleViewController;
         vc.maskView.alpha = percentVisible;
         
     }];

    self.window.rootViewController = drawViewController;
    [self.window makeKeyAndVisible];
    
    
    
    
    return YES;
}




@end
