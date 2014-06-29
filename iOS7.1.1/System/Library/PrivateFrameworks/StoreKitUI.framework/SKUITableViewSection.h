/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUITableViewSectionDelegate;
@interface SKUITableViewSection : NSObject {

	<SKUITableViewSectionDelegate>* _delegate;
	bool _hidesHeaderView;
	long long _sectionIndex;

}

@property (assign,nonatomic,__weak) <SKUITableViewSectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool hidesHeaderView;                                          //@synthesize hidesHeaderView=_hidesHeaderView - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                                        //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,readonly) long long numberOfRowsInSection; 
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
-(long long)sectionIndex;
-(void)setSectionIndex:(long long)arg1 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3 ;
-(id)headerViewForTableView:(id)arg1 ;
-(id)footerViewForTableView:(id)arg1 ;
-(bool)hidesHeaderView;
-(void)setHidesHeaderView:(bool)arg1 ;
@end
