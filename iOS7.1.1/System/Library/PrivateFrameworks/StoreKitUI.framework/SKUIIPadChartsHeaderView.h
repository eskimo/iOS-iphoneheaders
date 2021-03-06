/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIControl.h>

@class NSArray;

@interface SKUIIPadChartsHeaderView : UIControl {

	NSArray* _buttons;
	long long _selectedTitleIndex;

}

@property (assign,nonatomic) long long selectedTitleIndex;              //@synthesize selectedTitleIndex=_selectedTitleIndex - In the implementation block
@property (nonatomic,copy) NSArray * titles; 
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)setTitles:(id)arg1 ;
-(id)titles;
-(void).cxx_destruct;
-(void)_reloadSelectedButton;
-(void)setSelectedTitleIndex:(long long)arg1 ;
-(long long)selectedTitleIndex;
-(void)_buttonAction:(id)arg1 ;
@end

