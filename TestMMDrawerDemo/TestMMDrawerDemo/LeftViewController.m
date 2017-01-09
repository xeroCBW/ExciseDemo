//
//  LeftViewController.m
//  TestMMDrawerDemo
//
//  Created by 陈博文 on 16/12/7.
//  Copyright © 2016年 陈博文. All rights reserved.
//

#import "LeftViewController.h"
#import <UIViewController+MMDrawerController.h>
#import "CBWAlertView.h"

@interface LeftViewController ()<UITableViewDelegate,UITableViewDataSource>

@property (nonatomic, strong)UITableView *tableView;

@end

@implementation LeftViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.view.backgroundColor = [UIColor greenColor];
    
    [self.view addSubview:self.tableView];
    

    
    
}


#pragma mark - datasource
-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    
    return 20;
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    
    UITableViewCell *cell = [[UITableViewCell alloc]init];
    cell.textLabel.text = [NSString stringWithFormat:@"leftVC===%ld",indexPath.row];
    return cell;
}

#pragma mark - delegate

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
     [tableView deselectRowAtIndexPath:indexPath animated:YES];
  
    [self.mm_drawerController closeDrawerAnimated:YES completion:nil];
    
    [[NSNotificationCenter defaultCenter]postNotificationName:@"LeftViewControllerDidSelectRowAtIndexPath" object:indexPath];

    
}




#pragma mark - lazy


-(UITableView *)tableView{
    if (_tableView == nil) {
        _tableView = [[UITableView alloc]initWithFrame:self.view.frame style:UITableViewStylePlain];
        _tableView.delegate = self;
        _tableView.dataSource = self;
    }
    return _tableView;
}

@end
