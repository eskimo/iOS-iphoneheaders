/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface CKDKeyboardTracker : NSObject {

	NSArray* _enabledKeyboards;
	Class _CKDUITextInputModeClass;

}

@property (readonly) NSArray * enabledKeyboards; 
@property (assign,nonatomic) Class CKDUITextInputModeClass;              //@synthesize CKDUITextInputModeClass=_CKDUITextInputModeClass - In the implementation block
+(id)sharedTracker;
-(id)init;
-(id)_init;
-(NSArray *)enabledKeyboards;
-(void)setCKDUITextInputModeClass:(Class)arg1 ;
-(void)_inputModeChanged;
-(Class)CKDUITextInputModeClass;
-(void)_refreshEnabledKeyboards;
@end

