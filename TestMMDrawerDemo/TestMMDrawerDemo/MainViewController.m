//
//  MainViewController.m
//  TestMMDrawerDemo
//
//  Created by 陈博文 on 16/12/7.
//  Copyright © 2016年 陈博文. All rights reserved.
//

#import "MainViewController.h"
#import <UIViewController+MMDrawerController.h>
#import "CBWAlertView.h"
#import "CustomIOSAlertView.h"

@interface MainViewController ()<UITableViewDelegate,UITableViewDataSource>

@property (nonatomic, strong)UITableView *tableView;

@end

@implementation MainViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.view.backgroundColor = [UIColor whiteColor];

    
    [self setupLeftMenuButton];
    
    [self.navigationController.navigationBar addSubview:self.maskView];
    [self.view addSubview:self.tableView];
    
    [[NSNotificationCenter defaultCenter]addObserver:self selector:@selector(leftDrawMenuDidSelectedNotification:) name:@"LeftViewControllerDidSelectRowAtIndexPath" object:nil];
}


-(void)dealloc{
    
    
    [[NSNotificationCenter defaultCenter]removeObserver:self];
}

-(void)viewWillLayoutSubviews{
    
    [super viewWillLayoutSubviews];
    
    self.maskView.frame = CGRectMake(0, -20, [UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height);
}


-(void)setupLeftMenuButton{
    UIBarButtonItem * leftDrawerButton = [[UIBarButtonItem alloc] initWithTitle:@"左边按钮" style:UIBarButtonItemStylePlain target:self action:@selector(leftDrawerButtonPress:)];
    [self.navigationItem setLeftBarButtonItem:leftDrawerButton animated:YES];
}


-(void)leftDrawerButtonPress:(id)sender{
    [self.mm_drawerController toggleDrawerSide:MMDrawerSideLeft animated:YES completion:nil];
}

#pragma mark - datasource

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    
    return 20;
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    UITableViewCell *cell = [[UITableViewCell alloc]init];
    cell.textLabel.text = [NSString stringWithFormat:@"contentVC===%ld",indexPath.row];
    return cell;
}

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    [self setUpCBWCustomView];
}

- (void)setUpCustomView{
    
    CustomIOSAlertView *view  = [[CustomIOSAlertView alloc]init];
    view.buttonTitles = @[
                          @"确定",
                          @"取消"
                          ];
    [view show];
}

- (void)setUpCBWCustomView{
    
    CBWAlertView *alertView = [[CBWAlertView alloc]initWithTitle:@"test" andMessage:@"testMessage"];
    
    [alertView addButtonWithTitle:@"leftButton" color:nil handler:nil];
    alertView.animationType = AnimationTypeBigToSmall;
    
    [alertView show];
}

#pragma mark - 通知

- (void)leftDrawMenuDidSelectedNotification:(NSNotification *)notification{
    
    NSIndexPath *indexPath = notification.object;
    UIViewController *vc = [[UIViewController alloc]init];
    vc.title = [NSString stringWithFormat:@"%ld",indexPath.row];
    vc.view.backgroundColor = [UIColor whiteColor];
    
    [self.navigationController pushViewController:vc animated:YES];
    
}

#pragma mark - lazy

-(UIView *)maskView{
    
    
    if (_maskView == nil) {
        
        UIView *view = [[UIView alloc]initWithFrame:[UIScreen mainScreen].bounds];
        view.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.8];
        view.alpha = 0;
        view.userInteractionEnabled = NO;
        _maskView = view;
    }
    return _maskView;
}

-(UITableView *)tableView{
    
    
    if (_tableView == nil) {
        
        UITableView *tableView = [[UITableView alloc]initWithFrame:self.view.bounds];
        tableView.delegate = self;
        tableView.dataSource = self;
        
        _tableView = tableView;
    }
    return  _tableView ;
}
@end
