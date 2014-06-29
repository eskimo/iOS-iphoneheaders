/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/WeeAppPlugins/StocksWeeApp.bundle/StocksWeeApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StocksWeeApp/StocksWeeApp-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSArray;

@interface StocksWeeAppListView : UIView <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _stocksTable;
	NSArray* _stocks;
	bool _showingAll;
	long long _rowDataType;

}

@property (assign,nonatomic) long long rowDataType;              //@synthesize rowDataType=_rowDataType - In the implementation block
@property (assign,nonatomic) bool showingAll;                    //@synthesize showingAll=_showingAll - In the implementation block
-(long long)rowDataType;
-(void)_populateStocks:(bool)arg1 ;
-(bool)showingAll;
-(id)stockHitTest:(CGPoint)arg1 ;
-(void)layoutVisibleCells;
-(void)setRowDataType:(long long)arg1 ;
-(void)_stocksChanged;
-(void)_stocksUpdated;
-(void)listTapped:(id)arg1 ;
-(bool)_isShowAllCell:(id)arg1 ;
-(void)setShowingAll:(bool)arg1 ;
-(void)_stocksWillSync;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void).cxx_destruct;
-(void)hostDidPresent;
-(void)hostDidDismiss;
-(void)resetLocale;
@end
