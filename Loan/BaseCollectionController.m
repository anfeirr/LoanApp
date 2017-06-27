//
//  BaseCollectionController.m
//  Loan
//
//  Created by 王安帮 on 2017/6/24.
//  Copyright © 2017年 FangRongTech. All rights reserved.
//

#import "BaseCollectionController.h"

@interface BaseCollectionController ()

@end

@implementation BaseCollectionController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.

    self.pageSize = 10;
    UICollectionViewFlowLayout * layout = [[UICollectionViewFlowLayout alloc]init];
    layout.scrollDirection = UICollectionViewScrollDirectionVertical;
    layout.itemSize = CGSizeMake(100, 100);
    [self createCollectionViewWithCollectionViewLayout:layout];
    
}

- (void)createCollectionViewWithFrame:(CGRect)frame collectionViewLayout:(UICollectionViewLayout *)layout
{
    [self.collectionView removeFromSuperview];
    self.collectionView = nil;
    self.collectionView = [[UICollectionView alloc] initWithFrame:frame collectionViewLayout:layout];
    self.collectionView.dataSource = self;
    self.collectionView.delegate = self;
    self.collectionView.backgroundColor = kWhiteColor;
    [self addRefreshHeaderAndFooter];
    [self.view addSubview:self.collectionView];
}

- (void)createCollectionViewWithCollectionViewLayout:(UICollectionViewLayout *)layout
{
    [self.collectionView removeFromSuperview];
    self.collectionView = nil;
    self.collectionView = [[UICollectionView alloc] initWithFrame:CGRectMake(0, 0, kScreenWidth, kScreenHeight - kNavigationBarHeight - kTabBarHeight - kStatusBarHeight) collectionViewLayout:layout];
    self.collectionView.dataSource = self;
    self.collectionView.delegate = self;
    self.collectionView.backgroundColor = kWhiteColor;
    [self addRefreshHeaderAndFooter];
    [self.view addSubview:self.collectionView];
}

- (void)addRefreshHeaderAndFooter
{
    kWeakSelf
    // 下拉刷新
    self.collectionView.mj_header = [MJRefreshNormalHeader headerWithRefreshingBlock:^{
        kStrongSelf
        strongSelf.currentPage = 0;
        [strongSelf refreshAction];
    }];
    
    // 上拉刷新
    self.collectionView.mj_footer = [MJRefreshBackNormalFooter footerWithRefreshingBlock:^{
        kStrongSelf
        strongSelf.currentPage++;
        [strongSelf refreshAction];
    }];
}

- (void)refreshAction
{
    
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    return 0;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    return nil;
}

@end
