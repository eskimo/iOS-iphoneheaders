/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface DAUserNotificationInfo : NSObject {

	/*^block*/id _handler;
	NSString* _groupIdentifier;

}

@property (nonatomic,copy) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(void)setHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)handler;
@end

