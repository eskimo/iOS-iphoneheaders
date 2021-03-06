/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:05:06 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/MobileTimer.siriUIBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class SATimerObject, CADisplayLink, TimerSnippetTimeView;

@interface MobileTimerAssistantTimerSnippetCell : SiriUIContentCollectionViewCell {

	SATimerObject* _timer;
	CADisplayLink* _displayLink;
	char _stale;
	char _deviceTimer;
	TimerSnippetTimeView* _timeView;

}

@property (nonatomic,retain) SATimerObject * timer;              //@synthesize timer=_timer - In the implementation block
-(void)handleTimerStateChanged;
-(void)reloadTimerState;
-(void)markStale;
-(char)isDeviceTimer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(id)reuseIdentifier;
-(void)setTimer:(SATimerObject *)arg1 ;
-(SATimerObject *)timer;
-(char)isStale;
-(void)updateDisplay;
@end

