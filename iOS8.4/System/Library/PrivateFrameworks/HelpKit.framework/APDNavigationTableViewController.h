/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol APDNavigationTableViewControllerDelegate;
@class NSMutableArray, UITableView, APDDataManager, UIView, NSString;

@interface APDNavigationTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	NSMutableArray* _tableViewDataArray;
	BOOL _RTL;
	id<APDNavigationTableViewControllerDelegate> _delegate;
	UITableView* _tableView;
	APDDataManager* _dataManager;
	UIView* _tableFooterView;

}

@property (assign,nonatomic,__weak) id<APDNavigationTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL RTL;                                                                  //@synthesize RTL=_RTL - In the implementation block
@property (nonatomic,retain) APDDataManager * dataManager;                                              //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) UIView * tableFooterView;                                                  //@synthesize tableFooterView=_tableFooterView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<APDNavigationTableViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<APDNavigationTableViewControllerDelegate>)delegate;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setTableFooterView:(UIView *)arg1 ;
-(UIView *)tableFooterView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UITableView *)tableView;
-(APDDataManager *)dataManager;
-(void)setDataManager:(APDDataManager *)arg1 ;
-(void)setRTL:(BOOL)arg1 ;
-(BOOL)RTL;
-(void)updateLocalizedStrings;
-(BOOL)updateCellSelectionWithScollPosition:(long long)arg1 topic:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateFooterView;
@end

