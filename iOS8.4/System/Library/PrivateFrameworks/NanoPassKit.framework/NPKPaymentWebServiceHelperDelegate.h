/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NPKCompanionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol NPKPaymentWebServiceHelperDelegate <NSObject>
@required
-(void)shouldArchiveWebServiceContext:(id)arg1;
-(void)shouldArchiveWebServiceBackgroundContext:(id)arg1;
-(void)shouldSetNewAuthRandom:(/*^block*/id)arg1;
-(void)handlePushToken:(id)arg1;
-(void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1;
-(void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 shouldUnregister:(BOOL)arg2;

@end

