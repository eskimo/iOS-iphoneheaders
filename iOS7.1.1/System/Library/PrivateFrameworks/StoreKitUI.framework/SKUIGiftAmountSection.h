/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class SKUIGiftAmountControl, UIControl, NSString;

@interface SKUIGiftAmountSection : SKUIGiftTableViewSection {

	SKUIGiftAmountControl* _amountControl;

}

@property (nonatomic,readonly) UIControl * amountControl; 
@property (nonatomic,readonly) long long selectedAmount; 
@property (nonatomic,readonly) NSString * selectedAmountString; 
-(void).cxx_destruct;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3 ;
-(id)amountControl;
-(long long)selectedAmount;
-(id)selectedAmountString;
@end

