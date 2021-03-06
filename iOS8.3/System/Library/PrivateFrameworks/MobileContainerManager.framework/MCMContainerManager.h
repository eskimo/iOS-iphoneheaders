/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:36:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection;

@interface MCMContainerManager : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection; 
@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)defaultManager;
-(id)init;
-(id)_containersWithClass:(int)arg1 temporary:(char)arg2 error:(id*)arg3 ;
-(id)containerWithContentClass:(int)arg1 identifier:(id)arg2 error:(id*)arg3 ;
-(id)containerWithContentClass:(int)arg1 identifier:(id)arg2 createIfNecessary:(char)arg3 existed:(char*)arg4 error:(id*)arg5 ;
-(id)temporaryContainerWithContentClass:(int)arg1 identifier:(id)arg2 existed:(char*)arg3 error:(id*)arg4 ;
-(id)containersWithClass:(int)arg1 error:(id*)arg2 ;
-(id)temporaryContainersWithClass:(int)arg1 error:(id*)arg2 ;
-(void)deleteContainers:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(char)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id*)arg3 ;
-(char)restoreContainer:(id)arg1 error:(id*)arg2 ;
-(char)restoreContainer:(id)arg1 contentClass:(int)arg2 identifier:(id)arg3 info:(id)arg4 error:(id*)arg5 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

