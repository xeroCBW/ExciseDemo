//
//  UCSAboutHeaderView.m
//  Ewallet
//
//  Created by ucs on 15/4/10.
//  Copyright (c) 2015年 UCSMY. All rights reserved.
//
#import "UCSAboutHeaderView.h"
#import "UCSTdCodeView.h"

#import "CommonDefine.h"



@implementation UCSAboutHeaderView{
    UCSTdCodeView * tdCode;
    BOOL isTouchingTdCode;
}
-(instancetype)init{
    self=[super init];
    if (self) {
        
        
        
        [self setFrame:CGRectMake(0, 0, MainWidth, 220)];
        
        NSDictionary *infoDictionary = [[NSBundle mainBundle] infoDictionary];
        CFShow((__bridge CFTypeRef)(infoDictionary));
        // app版本
        NSString *app_Version = [infoDictionary objectForKey:@"CFBundleShortVersionString"];
        
        
        // 二维码--qcode
        tdCode=[[UCSTdCodeView alloc] initWithTarget:self andImage:[UIImage imageNamed:@"qcode.png"]];
        [tdCode setCenter:CGPointMake(MainWidth/2, 90)];
        [tdCode setStaticCenter:tdCode.center];
        [self addSubview:tdCode];
        
        UILabel *newsLab = [[UILabel alloc] initWithFrame:tdCode.frame];
        newsLab.text = [NSString stringWithFormat:@"玩够了\n就去投投高收益项目哈"];
        newsLab.textAlignment = NSTextAlignmentCenter;
        newsLab.textColor = TextGrayColor;
        newsLab.font = [UIFont systemFontOfSize:10];
        newsLab.layer.borderColor = TextGrayColor.CGColor;
        newsLab.layer.borderWidth = 0.5f;
        newsLab.numberOfLines = 0;
        [self addSubview:newsLab];
        
        [self bringSubviewToFront:tdCode];
        
        // label 1
        UILabel * label_a=[[UILabel alloc] initWithFrame:CGRectMake(0, 0, MainWidth/2, 44)];
        label_a.text = [NSString stringWithFormat:@"钱端V%@",app_Version];
        label_a.textColor=QDLightTextGrayColor;
        label_a.textAlignment=NSTextAlignmentCenter;
        label_a.font=[UIFont systemFontOfSize:12];
        label_a.center=CGPointMake(MainWidth/2, tdCode.center.y+78);
        [self addSubview:label_a];
        
        
        
        // label 2
        UILabel * label_b=[[UILabel alloc] initWithFrame:CGRectMake(0, 0, MainWidth, 44)];
        label_b.text=@"让朋友扫描二维码齐享收益";
        label_b.textColor=TextBlackColor;
        label_b.textAlignment=NSTextAlignmentCenter;
        label_b.font=[UIFont systemFontOfSize:12];
        label_b.center=CGPointMake(MainWidth/2, tdCode.center.y+100);
        [self addSubview:label_b];
    }
    return self;
}
-(void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event{
    CGPoint location = [touches.anyObject locationInView:self];
    if (CGRectContainsPoint(tdCode.frame, location)) {
        [tdCode bigTo:1.1];
        
        isTouchingTdCode=YES;
        
    }else{
        isTouchingTdCode=NO;
    }
}
-(void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event{
    CGPoint location = [touches.anyObject locationInView:self];
    if (isTouchingTdCode) {
        tdCode.center=location;
    }
}
-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event{
    if (isTouchingTdCode) {
        [tdCode backToRootPosition];
        [tdCode returnSize];
        isTouchingTdCode=NO;
    }
}
-(void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event{
    if (isTouchingTdCode) {
        [tdCode backToRootPosition];
        [tdCode returnSize];
        isTouchingTdCode=NO;
    }
}
@end
