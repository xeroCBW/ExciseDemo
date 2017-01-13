//
//  NSObject+Utils.h
//  TestObjectForIndexDemo
//
//  Created by 陈博文 on 17/1/13.
//  Copyright © 2017年 陈博文. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Utils)

- (void)swizzleMethod:(SEL)originalSelector swizzledSelector:(SEL)swizzledSelector;

@end
