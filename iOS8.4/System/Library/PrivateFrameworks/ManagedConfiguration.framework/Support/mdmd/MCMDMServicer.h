/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/mdmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <mdmd/MCMDMXPCProtocol.h>

@class NSXPCConnection, NSString;

@interface MCMDMServicer : NSObject <MCMDMXPCProtocol> {

	NSXPCConnection* _xpcConnection;

}

@property (assign,nonatomic,__weak) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)remoteProcessHasEntitlement:(id)arg1 ;
-(id)lacksEntitlementError:(id)arg1 ;
-(void)notifyNewConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(void)scheduleTokenUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)simulatePushWithCompletion:(/*^block*/id)arg1 ;
-(void)retryNotNowWithCompletion:(/*^block*/id)arg1 ;
-(void)uprootMDMWithCompletion:(/*^block*/id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

