/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class EKCalendarDate, NSString, UILabel, UIColor;

@interface CompactMonthWeekTodayCircle : UIView {

	EKCalendarDate* _calendarDate;
	unsigned _day;
	NSString* _dayString;
	UILabel* _dayLabel;
	UILabel* _overlayLabel;
	char _compressed;
	char _drawCircle;
	char _useTodayColors;
	char _showOverlay;
	UIColor* _nonTodayColor;

}

@property (assign,nonatomic) char compressed;                      //@synthesize compressed=_compressed - In the implementation block
@property (assign,nonatomic) char drawCircle;                      //@synthesize drawCircle=_drawCircle - In the implementation block
@property (assign,nonatomic) char useTodayColors;                  //@synthesize useTodayColors=_useTodayColors - In the implementation block
@property (assign,nonatomic) char showOverlay;                     //@synthesize showOverlay=_showOverlay - In the implementation block
@property (nonatomic,retain) UIColor * nonTodayColor;              //@synthesize nonTodayColor=_nonTodayColor - In the implementation block
+(float)circleDiameter;
+(id)dayNumberFont;
+(float)circleDiameterWithOverlayLarge;
+(float)circleDiameterWithOverlay;
+(float)circleDiameterCompressed;
+(id)dayOverlayFont;
+(float)topOffset;
-(void)_updateTextColor;
-(void)updateOverlay;
-(id)initWithCalendarDate:(id)arg1 ;
-(char)useTodayColors;
-(UIColor *)nonTodayColor;
-(char)drawCircle;
-(id)dayNumberString;
-(id)overlayString;
-(void)setUseTodayColors:(char)arg1 ;
-(void)setDrawCircle:(char)arg1 ;
-(void)setShowOverlay:(char)arg1 ;
-(void)setNonTodayColor:(UIColor *)arg1 ;
-(char)showOverlay;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)compressed;
-(void)setCompressed:(char)arg1 ;
@end

