/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:04:34 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, UIButton, UIActivityIndicatorView;

@interface PKWelcomeHeaderView : UIView {

	UIView* _titleView;
	UIButton* _actionButton;
	UIActivityIndicatorView* _activityIndicator;
	char _showActivityIndicator;
	unsigned _passType;

}

@property (nonatomic,readonly) unsigned passType;                     //@synthesize passType=_passType - In the implementation block
@property (assign,nonatomic) char showActivityIndicator;              //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
-(unsigned)passType;
-(id)initWithPassType:(unsigned)arg1 ;
-(void)addTapped;
-(void)_addTapped;
-(char)showActivityIndicator;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setShowActivityIndicator:(char)arg1 ;
@end

