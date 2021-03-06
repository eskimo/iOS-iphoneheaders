/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDSmartPathSource
@property (readonly) unsigned long long numberOfControlKnobs; 
@optional
-(CGPoint*)fixedPointForControlKnobChange;

@required
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2;
-(CGPoint*)getControlKnobPosition:(unsigned long long)arg1;
-(id)getFeedbackStringForKnob:(unsigned long long)arg1;
-(CGPathRef)newFeedbackPathForKnob:(unsigned long long)arg1;
-(unsigned long long)numberOfControlKnobs;
@end

