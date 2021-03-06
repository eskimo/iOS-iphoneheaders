/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:07 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDate, EKEvent;


@protocol CUIKSingleDayTimelineViewItem <NSObject>
@property (nonatomic,readonly) NSDate * startWithTravelTime; 
@property (nonatomic,readonly) NSDate * start; 
@property (nonatomic,readonly) NSDate * end; 
@property (nonatomic,readonly) char hideTravelTime; 
@property (nonatomic,readonly) float enoughHeightForOneLine; 
@property (nonatomic,readonly) float viewMaxNaturalTextHeight; 
@property (nonatomic,readonly) EKEvent * event; 
@property (assign) CGRect unPinnedViewFrame; 
@property (readonly) char visibleHeightLocked; 
@required
+(float)barToBarHorizontalDistanceIncludingBarWidth;
-(float)enoughHeightForOneLine;
-(float)viewMaxNaturalTextHeight;
-(char)visibleHeightLocked;
-(void)setStagedFrame:(CGRect)arg1;
-(CGRect*)stagedFrame;
-(void)setTravelTimeHeight:(float)arg1;
-(NSDate *)startWithTravelTime;
-(char)hideTravelTime;
-(CGRect)unPinnedViewFrame;
-(void)setUnPinnedViewFrame:(CGRect)arg1;
-(NSDate *)start;
-(NSDate *)end;
-(EKEvent *)event;
-(void)setVisibleHeight:(float)arg1;

@end

