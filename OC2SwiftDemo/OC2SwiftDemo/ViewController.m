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

@interface ViewController ()<UITableViewDelegate,UITableViewDataSource>
/** tableView*/
@property (nonatomic ,strong) UITableView *tableView;

/** listArr*/
@property (nonatomic ,strong) NSMutableArray *listArr;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self.listArr addObject:@"OC2SwiftDemo.QDAboutMyQDVC"];
    [self.listArr addObject:@"BaseVCViewController"];
    [self.listArr addObject:@"OC2SwiftDemo.EnumTestViewController"];
    [self.listArr addObject:@"EnumTestOCViewController"];
    
    [self.view addSubview:self.tableView];
    
    [self testMacroAndValues];
    
    [self testMacroAndValues2];
    
 
}


- (void)testMacroAndValues{
    
    
    [self testMacroAndValues2];
    
    
    NSLog(@"修改后");
//    testString = @"123";
//    testStringExternal = @"修改后";
    
    [self testMacroAndValues2];
}

- (void)testMacroAndValues2{
    
    NSLog(@"%@",Test);
    NSLog(@"%@",testString);
    NSLog(@"%@",testStringExternal);
}


#pragma mark - delegate

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    NSString *classStr = self.listArr[indexPath.row];
    Class vcClass = NSClassFromString(classStr);//命名空间的问题
    
    [self.navigationController pushViewController:[[vcClass alloc]init]  animated:YES];
    
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
    }
    return _listArr;
}


@end
