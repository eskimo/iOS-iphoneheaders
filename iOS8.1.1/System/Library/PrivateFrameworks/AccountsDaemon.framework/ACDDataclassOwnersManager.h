/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACDDataclassOwnersManagerProtocol;
@class NSXPCConnection;

@interface ACDDataclassOwnersManager : NSObject {

	id<ACDDataclassOwnersManagerProtocol> _remoteDOM;
	NSXPCConnection* _connection;

}
-(BOOL)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 ;
-(id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 ;
-(id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 ;
-(id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 ;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg1 ;
-(void)_connectToRemoteDataclassOwnersManager;
-(id)_remoteDOM;
-(id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 ;
@end

