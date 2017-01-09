//
//  CUSTdCodeView.m
//  Ewallet
//
//  Created by ucs on 15/4/14.
//  Copyright (c) 2015年 UCSMY. All rights reserved.
//

#import "UCSTdCodeView.h"

@interface UCSTdCodeView()

@property(nonatomic,strong)UIDynamicAnimator * animator;

@property(nonatomic,strong)UIView * targetView;

@end

@implementation UCSTdCodeView

-(instancetype)initWithTarget:(id)target andImage:(UIImage *)image
{
    self=[super init];
    if (self) {
        
        _targetView=target;
        
        self.image=image;
        
        
        [self setFrame:CGRectMake(0, 0, image.size.width, image.size.height)];
        
        
        
        _animator = [[UIDynamicAnimator alloc] initWithReferenceView:_targetView];
        
        
        
        
    }
    
    
    return self;
}

-(void)backToRootPosition{
    
    
    // 移除之前的仿真行为
    [_animator removeAllBehaviors];
    
    
    // 添加行为
    UISnapBehavior *snap = [[UISnapBehavior alloc] initWithItem:self snapToPoint:_staticCenter];
    // 振幅
    snap.damping =0.8;
    
    // 添加仿真行为
    [_animator addBehavior:snap];
    
}
-(void)bigTo:(CGFloat)xandy{
    [UIView animateWithDuration:0.2 animations:^{
        self.transform=CGAffineTransformMakeScale(xandy, xandy);
        self.layer.shadowColor=[UIColor colorWithWhite:0 alpha:1].CGColor;
        self.layer.shadowOffset=CGSizeMake(0, 0);
        self.layer.shadowOpacity=1;
    }];
}
-(void)returnSize{
    [UIView animateWithDuration:0.2 animations:^{
        self.transform=CGAffineTransformMakeScale(1.0f, 1.0f);
        self.layer.shadowColor=[UIColor clearColor].CGColor;
        self.layer.shadowOffset=CGSizeMake(0, 0);
        self.layer.shadowOpacity=0;
    }];
    
}
@end
