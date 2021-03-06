/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:53 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol LAUIDelegate;
@class NSDictionary;

@interface MechanismBase : NSObject {

	/*^block*/id _replyToRun;
	NSDictionary* _internalOptions;
	NSDictionary* _policyOptions;
	NSDictionary* _activationParams;
	id<LAUIDelegate> _eventsDelegate;
	int _eventIdentifier;

}

@property (retain) NSDictionary * internalOptions;                   //@synthesize internalOptions=_internalOptions - In the implementation block
@property (retain) NSDictionary * policyOptions;                     //@synthesize policyOptions=_policyOptions - In the implementation block
@property (retain) NSDictionary * activationParams;                  //@synthesize activationParams=_activationParams - In the implementation block
@property (retain) id<LAUIDelegate> eventsDelegate;                  //@synthesize eventsDelegate=_eventsDelegate - In the implementation block
@property (readonly) int eventIdentifier;                            //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (readonly) NSDictionary * availabilityEvents; 
@property (getter=isRunning,readonly) char running; 
@property (getter=isAvailable,readonly) char available; 
@property (readonly) char canSucceed; 
-(char)isAvailableWithError:(id*)arg1 ;
-(void)noResponseEventWithParams:(id)arg1 ;
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 ;
-(void)failAuthenticationWithError:(id)arg1 ;
-(char)requiresRemoteViewControllerUiWithEventProcessing:(id)arg1 ;
-(char)canSucceed;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)succeedAuthenticationWithResult:(id)arg1 ;
-(id)bestEffortAvailableMechanismWithError:(id*)arg1 ;
-(id)findMechanismWithEventIdentifier:(int)arg1 ;
-(id)findMechanismWithClass:(Class)arg1 ;
-(NSDictionary *)availabilityEvents;
-(id)adjustStringForNestedDescription:(id)arg1 ;
-(char)requiresUiWithEventProcessing:(id)arg1 ;
-(NSDictionary *)internalOptions;
-(void)setInternalOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)policyOptions;
-(void)setPolicyOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)activationParams;
-(void)setActivationParams:(NSDictionary *)arg1 ;
-(id<LAUIDelegate>)eventsDelegate;
-(void)setEventsDelegate:(id<LAUIDelegate>)arg1 ;
-(int)eventIdentifier;
-(char)isRunning;
-(id)initWithEventIdentifier:(int)arg1 ;
-(void)willFinish;
-(void)event:(int)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(char)isAvailable;
-(void)cancelAuthentication;
@end

