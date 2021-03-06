/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AutoGuessUIDelegate.h>
#import <AirPortAssistant/SetupUIDelegate.h>
#import <AirPortAssistant/StepByStepUIDelegate.h>
#import <AirPortAssistant/AssistantUIDelegateResult.h>
#import <AirPortAssistant/SetupUIConfigDelegate.h>

@class NSMutableDictionary, AutoGuessController, AUSetupController, StepByStepController, NSDictionary, NSString, NSArray;

@interface AssistantUIController : NSObject <AutoGuessUIDelegate, SetupUIDelegate, StepByStepUIDelegate, AssistantUIDelegateResult, SetupUIConfigDelegate> {

	id _delegate;
	NSMutableDictionary* _setupOptions;
	int _state;
	bool _canceling;
	AutoGuessController* _autoGuessController;
	AUSetupController* _setupController;
	StepByStepController* _stepByStepController;
	NSDictionary* _guessCompleteDict;
	int _connectionStatusSelectorAwaitingResolution;
	NSDictionary* _lastAssociatedInfo;
	NSDictionary* _lastAutoguessInstrumentation;
	NSDictionary* _lastSetupInstrumentation;
	NSDictionary* _lastStepByStepInstrumentation;
	NSString* _targetMACAddress;
	NSDictionary* _targetScanRecord;
	NSDictionary* _targetBrowseRecord;
	NSArray* _paramScanResults;

}

@property (retain) NSString * targetMACAddress;                                   //@synthesize targetMACAddress=_targetMACAddress - In the implementation block
@property (retain) NSDictionary * targetScanRecord;                               //@synthesize targetScanRecord=_targetScanRecord - In the implementation block
@property (retain) NSDictionary * targetBrowseRecord;                             //@synthesize targetBrowseRecord=_targetBrowseRecord - In the implementation block
@property (retain) NSArray * paramScanResults;                                    //@synthesize paramScanResults=_paramScanResults - In the implementation block
@property (assign) id delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableDictionary * setupOptions;                            //@synthesize setupOptions=_setupOptions - In the implementation block
@property (readonly) int state;                                                   //@synthesize state=_state - In the implementation block
@property (retain) AutoGuessController * autoGuessController;                     //@synthesize autoGuessController=_autoGuessController - In the implementation block
@property (retain) AUSetupController * setupController;                           //@synthesize setupController=_setupController - In the implementation block
@property (retain) StepByStepController * stepByStepController;                   //@synthesize stepByStepController=_stepByStepController - In the implementation block
@property (retain) NSDictionary * guessCompleteDict;                              //@synthesize guessCompleteDict=_guessCompleteDict - In the implementation block
@property (readonly) int connectionStatusSelectorAwaitingResolution;              //@synthesize connectionStatusSelectorAwaitingResolution=_connectionStatusSelectorAwaitingResolution - In the implementation block
@property (retain) NSDictionary * lastAssociatedInfo;                             //@synthesize lastAssociatedInfo=_lastAssociatedInfo - In the implementation block
@property (retain) NSDictionary * lastAutoguessInstrumentation;                   //@synthesize lastAutoguessInstrumentation=_lastAutoguessInstrumentation - In the implementation block
@property (retain) NSDictionary * lastSetupInstrumentation;                       //@synthesize lastSetupInstrumentation=_lastSetupInstrumentation - In the implementation block
@property (retain) NSDictionary * lastStepByStepInstrumentation;                  //@synthesize lastStepByStepInstrumentation=_lastStepByStepInstrumentation - In the implementation block
-(bool)restoreNetworkIfNeeded:(bool)arg1 disassociateIfNeeded:(bool)arg2 forceQuit:(bool)arg3 ;
-(void)handlePresentAutoGuessUIFromAutoGuessCompleteResult:(bool)arg1 ;
-(id)setupPromptStringForBaseInfo:(id)arg1 andResult:(int)arg2 ;
-(void)presentUIForConnectionVerification:(int)arg1 status:(int)arg2 paramDict:(id)arg3 ;
-(void)presentUIForUIConfigPrompt:(int)arg1 paramDict:(id)arg2 ;
-(int)startSetupFromStepByStepResults:(id)arg1 ;
-(int)startRestoreNetwork:(id)arg1 ;
-(void)restoreNetworkDone:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(int)state;
-(id)targetMACAddress;
-(id)targetScanRecord;
-(id)targetBrowseRecord;
-(void)setTargetScanRecord:(id)arg1 ;
-(void)setTargetMACAddress:(id)arg1 ;
-(void)autoguessProgressUpdated:(int)arg1 paramString:(id)arg2 ;
-(void)setTargetBrowseRecord:(id)arg1 ;
-(void)autoguessUpdateTargetInfo:(id)arg1 ;
-(void)autoguessProgressComplete:(id)arg1 ;
-(id)paramScanResults;
-(void)setParamScanResults:(id)arg1 ;
-(int)startAutoGuess;
-(int)doneWithAssistant:(bool)arg1 ;
-(id)guessCompleteDict;
-(int)startStepByStepFromAutoGuessRecommendation;
-(void)presentUIForStepByStepNextStepResult:(int)arg1 withOptions:(id)arg2 ;
-(void)presentUIForConnectionVerificationResult:(int)arg1 withOptions:(id)arg2 ;
-(void)showUIConfigPromptResult:(int)arg1 withOptions:(id)arg2 ;
-(id)setupOptions;
-(id)modifyTopoUIInLayer:(id)arg1 withLayout:(id)arg2 andOwningView:(id)arg3 targetProductID:(id)arg4 targetDeviceKind:(id)arg5 targetName:(id)arg6 targetWiFiName:(id)arg7 sourceProductID:(id)arg8 sourceDeviceKind:(id)arg9 sourceName:(id)arg10 sourceWiFiName:(id)arg11 connectionType:(id)arg12 ;
-(int)startSetupFromAutoGuessRecommendation:(id)arg1 ;
-(int)cancelCurrentAssistantState:(bool)arg1 ;
-(void)setAutoGuessController:(id)arg1 ;
-(void)setLastAssociatedInfo:(id)arg1 ;
-(id)setupController;
-(void)setSetupController:(id)arg1 ;
-(id)stepByStepController;
-(void)setStepByStepController:(id)arg1 ;
-(id)autoGuessController;
-(void)deliverSetupUIConfigResult:(int)arg1 withOptions:(id)arg2 ;
-(void)setGuessCompleteDict:(id)arg1 ;
-(void)setLastAutoguessInstrumentation:(id)arg1 ;
-(void)setLastSetupInstrumentation:(id)arg1 ;
-(void)setupProgressUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4 ;
-(void)setupCompleteWithResult:(int)arg1 baseStationInfo:(id)arg2 forController:(id)arg3 ;
-(void)stepByStepProgressUpdated:(int)arg1 status:(int)arg2 paramString:(id)arg3 ;
-(void)stepByStepCompleteWithResult:(int)arg1 paramDict:(id)arg2 ;
-(void)stepByStepNextStep:(int)arg1 paramDict:(id)arg2 ;
-(void)setupUIConfigConnectionStatusUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4 ;
-(void)setupUIConfigPrompt:(int)arg1 paramDict:(id)arg2 forController:(id)arg3 ;
-(int)startRestoreFromAutoGuessRecommendation;
-(void)setSetupOptions:(id)arg1 ;
-(int)connectionStatusSelectorAwaitingResolution;
-(id)lastAssociatedInfo;
-(id)lastAutoguessInstrumentation;
-(id)lastSetupInstrumentation;
-(id)lastStepByStepInstrumentation;
-(void)setLastStepByStepInstrumentation:(id)arg1 ;
@end

