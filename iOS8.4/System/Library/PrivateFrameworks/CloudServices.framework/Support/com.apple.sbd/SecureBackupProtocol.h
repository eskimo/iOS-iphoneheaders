/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Support/com.apple.sbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SecureBackupProtocol <NSObject>
@required
-(void)getAccountInfoWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)enableWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)recoverWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)disableWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)cachePassphraseWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)uncachePassphraseWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)changeSMSTargetWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startSMSChallengeWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)backupWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)cachePassphraseWithInfoAsync:(id)arg1;
-(void)uncachePassphraseWithInfoAsync:(id)arg1;

@end
