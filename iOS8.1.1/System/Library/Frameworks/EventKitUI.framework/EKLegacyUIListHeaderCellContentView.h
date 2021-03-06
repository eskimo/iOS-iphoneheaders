/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@interface EKLegacyUIListHeaderCellContentView : UIView {

	double _date;
	BOOL _indentsForDots;
	BOOL _showWeekNumber;

}

@property (assign,nonatomic) double date; 
@property (assign,nonatomic) BOOL indentsForDots; 
@property (assign,nonatomic) BOOL showWeekNumber;              //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
-(BOOL)indentsForDots;
-(void)setIndentsForDots:(BOOL)arg1 ;
-(void)setShowWeekNumber:(BOOL)arg1 ;
-(BOOL)showWeekNumber;
-(CGRect)_rectForOffetTextShadow:(CGRect)arg1 ;
-(id)_normalTextColor;
-(id)_normalTextShadowColor;
-(void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(CGRect)arg4 ;
-(id)_weekNumberFont;
-(void)drawRect:(CGRect)arg1 ;
-(double)date;
-(void)setDate:(double)arg1 ;
@end

