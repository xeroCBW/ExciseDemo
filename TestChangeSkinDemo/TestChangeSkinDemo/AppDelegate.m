//
//  AppDelegate.m
//  TestDemo
//
//  Created by 陈博文 on 17/2/4.
//  Copyright © 2017年 陈博文. All rights reserved.
//

#import "AppDelegate.h"


@interface AppDelegate ()

@property (nonatomic, assign) BOOL changeState;

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
   
    
    [[NSNotificationCenter defaultCenter]addObserver:self selector:@selector(changeColor) name:@"changeColor" object:nil];
    
    return YES;
}


- (void)changeColor{
    
  //  http://stackoverflow.com/questions/19029833/ios-7-navigation-bar-text-and-arrow-color
    
    
    
    float r = arc4random_uniform(255)/255.0;
    float g = arc4random_uniform(255)/255.0;
    float b = arc4random_uniform(255)/255.0;
   UIColor *color = [UIColor colorWithRed:r green:g blue:b alpha:1.0];
    
    UIColor *textColor = [UIColor colorWithRed:r green:0.0 blue:0.0 alpha:1.0];
    
    
    // 1.把window的根视图控制器取出来
    UIViewController *vc = self.window.rootViewController;
    
    // 2.把已经设置window的根视图控制器重置为空
    self.window.rootViewController = nil;
    // 3.设置新皮肤
    // 取出NavBar 和TabBar
    // 通过调用appearance取出要更改的bar
    UINavigationBar *navBar = [UINavigationBar appearance];
    UITabBar *tabBar = [UITabBar appearance];
    // 设置新的背景,如果这里有多条通知同时响应这个方法,可以通过实参notification中的name属性判定
    [navBar setBarTintColor:color];
    [tabBar setBarTintColor:color];
    

    tabBar.tintColor = textColor;
    [navBar setTitleTextAttributes:@{NSForegroundColorAttributeName : textColor}];
    navBar.translucent = NO;
    //设置 TabBar 的图片和
    
    self.changeState = !self.changeState;
    
    if (self.changeState)
    {
        UITabBarController *tabVC = (UITabBarController *)vc;
        UITabBarItem *item1 = tabVC.tabBar.items[0];
        item1.image = [[UIImage imageNamed:@"tabbar_index_normal"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        item1.selectedImage = [[UIImage imageNamed:@"tabbar_index_selected"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        item1.title = @"我的";
        item1 = tabVC.tabBar.items[0];
        
        UITabBarItem *item2 = tabVC.tabBar.items[1];
        item2.image = [[UIImage imageNamed:@"tabbar_invest_normal"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        item2.selectedImage = [[UIImage imageNamed:@"tabbar_invest_selected"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        item2.title = @"首页";
        item2 = tabVC.tabBar.items[1];

    }
    else
    {
        UITabBarController *tabVC = (UITabBarController *)vc;
        UITabBarItem *item1 = tabVC.tabBar.items[0];
        item1.image = [[UIImage imageNamed:@"tabbar_shopmall_normal"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        item1.selectedImage = [[UIImage imageNamed:@"tabbar_shopmall_selected"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        item1.title = @"我的";
        item1 = tabVC.tabBar.items[0];
        
        UITabBarItem *item2 = tabVC.tabBar.items[1];
        item2.image = [[UIImage imageNamed:@"tabbar_mine_normal"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        item2.selectedImage = [[UIImage imageNamed:@"tabbar_mine_selected"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        item2.title = @"首页";
        item2 = tabVC.tabBar.items[1];

    }
    
    // 4.重新赋值window的根视图控制器
    self.window.rootViewController = vc;

 }

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}


@end
