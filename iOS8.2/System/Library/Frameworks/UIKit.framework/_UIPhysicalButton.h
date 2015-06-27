/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIResponderForwardable.h>

@class NSMutableArray, UIWindow, UIResponder, NSArray, NSString;

@interface _UIPhysicalButton : NSObject <_UIResponderForwardable> {

	NSMutableArray* _gestureRecognizers;
	NSMutableArray* _forwardingRecord;
	char _abandonForwardingRecord;
	int _phase;
	int _type;
	UIWindow* _window;
	UIResponder* _responder;
	double _timestamp;

}

@property (assign,nonatomic) double timestamp;                                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) int phase;                                                       //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) int type;                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                               //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) UIResponder * responder;                                         //@synthesize responder=_responder - In the implementation block
@property (nonatomic,copy) NSArray * gestureRecognizers; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setForwardablePhase:,nonatomic) int _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
-(void)dealloc;
-(UIWindow *)window;
-(double)timestamp;
-(void)setWindow:(UIWindow *)arg1 ;
-(int)phase;
-(void)setPhase:(int)arg1 ;
-(NSArray *)gestureRecognizers;
-(void)setType:(int)arg1 ;
-(void)setResponder:(UIResponder *)arg1 ;
-(void)setGestureRecognizers:(NSArray *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(void)_setForwardablePhase:(int)arg1 ;
-(UIResponder *)_responder;
-(void)_setResponder:(id)arg1 ;
-(UIResponder *)responder;
-(id)_forwardingRecord;
-(SEL)_responderSelectorForPhase:(int)arg1 ;
-(char)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3 ;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(int)_forwardablePhase;
-(char)_isAbandoningForwardingRecord;
-(id)_mutableForwardingRecord;
-(void)_abandonForwardingRecord;
@end
