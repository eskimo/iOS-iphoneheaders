/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BLTPingSubscribing.h>

@class NSXPCConnection, NSString;

@interface BLTSubscriberRemoteClient : NSObject <BLTPingSubscribing> {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)pingWithBulletin:(id)arg1 ;
-(id)sectionIDs;
-(id)sectionIDsForPings;
-(id)sectionIDsForBulletins;
-(void)pingSubscriberDidLoad;
-(id)initWithConnection:(id)arg1 ;
@end

