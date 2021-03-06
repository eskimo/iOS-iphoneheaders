/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel;

@interface MusicTableSectionHeaderView : UITableViewHeaderFooterView {

	float _backgroundTransitionWeighting;
	UILabel* _titleLabel;

}

@property (assign,nonatomic) float backgroundTransitionWeighting;              //@synthesize backgroundTransitionWeighting=_backgroundTransitionWeighting - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
+(float)defaultHeight;
-(void)layoutSubviews;
-(id)titleLabel;
-(void)setTableViewStyle:(int)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setBackgroundTransitionProgress:(float)arg1 ;
-(void)setBackgroundTransitionWeighting:(float)arg1 ;
-(float)backgroundTransitionWeighting;
-(void).cxx_destruct;
@end

