/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@class _UIBackdropView, UILabel, NSAttributedString;

@interface RUTableSectionHeaderView : UITableViewHeaderFooterView {

	_UIBackdropView* _backdropView;
	UILabel* _titleLabel;
	double _backdropTransitionWeighting;

}

@property (nonatomic,copy) NSAttributedString * attributedTitle; 
@property (assign,nonatomic) double backdropTransitionWeighting;              //@synthesize backdropTransitionWeighting=_backdropTransitionWeighting - In the implementation block
-(void)layoutSubviews;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setTableViewStyle:(long long)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSAttributedString *)attributedTitle;
-(void)setBackdropTransitionWeighting:(double)arg1 ;
-(double)backdropTransitionWeighting;
@end

