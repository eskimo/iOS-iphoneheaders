/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ASPolicyPreflighterDelegate;
@class ASAccount, ASPolicy, NSString, ASTaskManager;

@interface ASPolicyPreflighter : NSObject {

	BOOL _invalidated;
	ASAccount* _account;
	id<ASPolicyPreflighterDelegate> _delegate;
	id _contextInfo;
	ASPolicy* _policy;
	ASPolicy* _acknowledgedPolicy;
	NSString* _originalKey;
	ASTaskManager* _taskManager;

}

@property (assign,nonatomic,__weak) ASAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) id<ASPolicyPreflighterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id contextInfo;                                        //@synthesize contextInfo=_contextInfo - In the implementation block
@property (nonatomic,retain) ASPolicy * policy;                                            //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) ASPolicy * acknowledgedPolicy;                                //@synthesize acknowledgedPolicy=_acknowledgedPolicy - In the implementation block
@property (nonatomic,copy) NSString * originalKey;                                         //@synthesize originalKey=_originalKey - In the implementation block
@property (nonatomic,retain) ASTaskManager * taskManager;                                  //@synthesize taskManager=_taskManager - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                             //@synthesize invalidated=_invalidated - In the implementation block
-(BOOL)invalidated;
-(ASPolicy *)policy;
-(void)dealloc;
-(void)setDelegate:(id<ASPolicyPreflighterDelegate>)arg1 ;
-(id<ASPolicyPreflighterDelegate>)delegate;
-(void)invalidate;
-(id)contextInfo;
-(void)setContextInfo:(id)arg1 ;
-(ASAccount *)account;
-(void)setAccount:(ASAccount *)arg1 ;
-(ASTaskManager *)taskManager;
-(void)setTaskManager:(ASTaskManager *)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)setOriginalKey:(NSString *)arg1 ;
-(void)setPolicy:(ASPolicy *)arg1 ;
-(ASPolicy *)acknowledgedPolicy;
-(NSString *)originalKey;
-(void)setAcknowledgedPolicy:(ASPolicy *)arg1 ;
-(id)initWithAccount:(id)arg1 policyKey:(id)arg2 ;
-(id)_originalKey;
-(void)provisionTask:(id)arg1 failedWithError:(id)arg2 ;
-(void)provisionTask:(id)arg1 wipeRequested:(BOOL)arg2 policies:(id)arg3 status:(int)arg4 ;
-(void)startPreflight;
-(void)acknowledgePolicyCompliance;
-(void)acknowledgeIntentionToRemoteWipe;
-(void)cancelPendingPreflightRequest;
@end
