//
//  ViewController.m
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/4.
//  Copyright © 2017年 陈博文. All rights reserved.
//

#import "ViewController.h"
#import "OC2SwiftDemo-Swift.h"
#import "BaseVCViewController.h"
#import "MacroOC.h"

//全局静态变量和宏只是在每个类中,如果在一个类中定义一个全局静态变量或者宏;在另外一个 全局静态变量或者宏 钟定义另外一个 全局静态变量或者宏; 那么会提示重定义
//#define Test @"ViewController"
//static NSString *testString = @"testString";
//NSString *testStringExternal = @"testStringExternal";

@interface ViewController ()<UITableViewDelegate,UITableViewDataSource,SwiftDelegateViewControllerDelegate>
/** tableView*/
@property (nonatomic ,strong) UITableView *tableView;

/** listArr*/
@property (nonatomic ,strong) NSMutableArray *listArr;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(notificationAction) name:@"yourCustomNotificationName" object:nil];

    [self.view addSubview:self.tableView];
    
    
 
}

-(void)dealloc{
    
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

#pragma mark - private

- (void)notificationAction{
    
    NSLog(@"received notification from swift");
}

#pragma mark - delegate

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    NSString *classStr = self.listArr[indexPath.row];
    Class vcClass = NSClassFromString(classStr);//命名空间的问题
    
    if ([classStr isEqualToString:@"OC2SwiftDemo.SwiftDelegateViewController"]) {
        
        SwiftDelegateViewController *vc = [[SwiftDelegateViewController alloc]init];
        vc.delegate = self;
         [self.navigationController pushViewController:vc  animated:YES];
        return;
    }
    
    if ([classStr isEqualToString:@"OC2SwiftDemo.SwiftClosureTestViewController"]) {
        
        SwiftClosureTestViewController *vc = [[SwiftClosureTestViewController alloc]init];
        vc.callback = ^(NSString *string){
            
            NSLog(@"%@",string);
            
        };
        
        
        
        [self.navigationController pushViewController:vc  animated:YES];
        return;
    }

    
    [self.navigationController pushViewController:[[vcClass alloc]init]  animated:YES];
    
}

-(void)didClickView:(UIView *)view{
    
    NSLog(@"%s:implement swift delegate ",__func__);
    
}

#pragma mark - datasource

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    
    return self.listArr.count;
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    UITableViewCell *cell = [[UITableViewCell alloc]init];
    cell.textLabel.text = self.listArr[indexPath.row];
    return cell;
    
}

#pragma mark - 懒加载

-(UITableView *)tableView{
    if (_tableView== nil) {
        _tableView = [[UITableView alloc]initWithFrame:self.view.bounds style:UITableViewStylePlain];
        _tableView.delegate = self;
        _tableView.dataSource = self;
    }
    return _tableView;
}

-(NSMutableArray *)listArr{
    if (_listArr == nil) {
        _listArr = [NSMutableArray array];
        
        
        [_listArr addObject:@"OC2SwiftDemo.QDAboutMyQDVC"];
        [_listArr addObject:@"BaseVCViewController"];
        [_listArr addObject:@"OC2SwiftDemo.EnumTestViewController"];
        [_listArr addObject:@"EnumTestOCViewController"];
        [_listArr addObject:@"OC2SwiftDemo.SwiftMacroViewController"];
        [_listArr addObject:@"OC2SwiftDemo.SwiftEnvironmentViewController"];
        [_listArr addObject:@"OC2SwiftDemo.SwiftNotificationViewController"];
        [_listArr addObject:@"OC2SwiftDemo.SwiftDelegateViewController"];//SwiftClosureTestViewController
        [_listArr addObject:@"OC2SwiftDemo.SwiftClosureTestViewController"];
    }
    return _listArr;
}


@end
