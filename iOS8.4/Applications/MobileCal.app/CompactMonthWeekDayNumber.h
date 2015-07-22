/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MobileCal/MobileCal-Structs.h>
@class CALayer, EKCalendarDate, NSCalendar, CompactMonthWeekTodayCircle;

@interface CompactMonthWeekDayNumber : NSObject {

	CALayer* _layer;
	float _offsetX;
	EKCalendarDate* _calendarDate;
	NSCalendar* _calendar;
	CompactMonthWeekTodayCircle* _attachedTodayCircle;
	CGRect _lastKnownTappableZone;

}

@property (nonatomic,retain) EKCalendarDate * calendarDate;                                  //@synthesize calendarDate=_calendarDate - In the implementation block
@property (nonatomic,readonly) char representsActualDate; 
@property (nonatomic,retain) NSCalendar * calendar;                                          //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) float offsetX; 
@property (nonatomic,retain) CompactMonthWeekTodayCircle * attachedTodayCircle;              //@synthesize attachedTodayCircle=_attachedTodayCircle - In the implementation block
@property (assign,nonatomic) CGRect lastKnownTappableZone;                                   //@synthesize lastKnownTappableZone=_lastKnownTappableZone - In the implementation block
+(float)baselineOffsetFromTopOfLayer;
+(id)_standardLabel;
+(id)_dayNumberFont;
-(void)setCalendarDate:(EKCalendarDate *)arg1 ;
-(CompactMonthWeekTodayCircle *)attachedTodayCircle;
-(void)setLastKnownTappableZone:(CGRect)arg1 ;
-(CGRect)lastKnownTappableZone;
-(char)representsActualDate;
-(void)setAttachedTodayCircle:(CompactMonthWeekTodayCircle *)arg1 ;
-(char)_calendarDateIsOnWeekend;
-(id)_weekendImageForDayNumberString:(id)arg1 ;
-(id)_weekdayImageForDayNumberString:(id)arg1 ;
-(id)_generateImageWithString:(id)arg1 color:(id)arg2 ;
-(EKCalendarDate *)calendarDate;
-(CALayer *)layer;
-(id)init;
-(id)description;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(float)offsetX;
@end
