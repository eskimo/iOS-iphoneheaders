/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/AXEventHandler.h>

@protocol SCATHardwareInputSourceDelegate;
@class NSMapTable, AXAccessQueue, NSString;

@interface SCATHardwareInputSource : NSObject <AXEventHandler> {

	char* _hidReportBuffer;
	BOOL _available;
	BOOL _running;
	NSMapTable* _actions;
	id<SCATHardwareInputSourceDelegate> _delegate;
	AXAccessQueue* _queue;
	IOHIDManagerRef _hidManager;
	unsigned long long _availabilityDetail;

}

@property (nonatomic,retain) NSMapTable * actions;                                      //@synthesize actions=_actions - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;                         //@synthesize available=_available - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                             //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) id<SCATHardwareInputSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AXAccessQueue * queue;                                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) IOHIDManagerRef hidManager;                                //@synthesize hidManager=_hidManager - In the implementation block
@property (assign,nonatomic) unsigned long long availabilityDetail;                     //@synthesize availabilityDetail=_availabilityDetail - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handledEvent:(id)arg1 ;
-(void)_didReceiveAction:(long long)arg1 start:(BOOL)arg2 ;
-(BOOL)isMFIInputSource;
-(void)_startHandlingEvents;
-(void)_stopHandlingEvents;
-(BOOL)isKeyboardInputSource;
-(unsigned long long)availabilityDetail;
-(void)setAvailabilityDetail:(unsigned long long)arg1 ;
-(id)_matchingCriteria;
-(void)_didUpdateAvailability:(BOOL)arg1 withDetail:(unsigned long long)arg2 ;
-(void)_startDetectingDevices;
-(void)_stopDetectingDevices;
-(void)startRunning;
-(void)stopRunning;
-(IOHIDManagerRef)hidManager;
-(void)setHidManager:(IOHIDManagerRef)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SCATHardwareInputSourceDelegate>)arg1 ;
-(id<SCATHardwareInputSourceDelegate>)delegate;
-(NSMapTable *)actions;
-(BOOL)isRunning;
-(unsigned long long)priority;
-(void)setQueue:(AXAccessQueue *)arg1 ;
-(AXAccessQueue *)queue;
-(BOOL)isAvailable;
-(void)setAvailable:(BOOL)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)setActions:(NSMapTable *)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end

