//
//  CUSTdCodeView.h
//  Ewallet
//
//  Created by ucs on 15/4/14.
//  Copyright (c) 2015年 UCSMY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UCSTdCodeView : UIImageView

@property(nonatomic,assign)CGPoint staticCenter;

-(instancetype)initWithTarget:(id)target andImage:(UIImage *)image;


-(void)bigTo:(CGFloat)xandy;

-(void)returnSize;

-(void)backToRootPosition;

@end
