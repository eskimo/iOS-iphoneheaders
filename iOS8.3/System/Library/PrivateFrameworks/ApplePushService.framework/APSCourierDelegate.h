/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:43:27 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class APSIDSProxyManager;


@protocol APSCourierDelegate <NSObject>
@property (nonatomic,retain,readonly) APSIDSProxyManager * proxyManager; 
@required
-(void)courierHasNoConnections:(id)arg1;
-(APSIDSProxyManager *)proxyManager;
-(void)courierConnectionStatusDidChange:(id)arg1;
-(void)shouldUseInternetDidChange:(id)arg1;

@end
