/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/NSCopying.h>
#import <BulletinBoard/NSSecureCoding.h>

@class NSSet;

@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding> {

	unsigned _publisherDestination;
	int _maximumCount;
	NSSet* _enabledSectionIDs;

}

@property (nonatomic,readonly) unsigned publisherDestination;              //@synthesize publisherDestination=_publisherDestination - In the implementation block
@property (nonatomic,readonly) unsigned maximumCount; 
@property (nonatomic,readonly) NSSet * enabledSectionIDs; 
+(char)supportsSecureCoding;
+(id)requestParametersForDestination:(unsigned)arg1 withMaximumCount:(int)arg2 enabledSectionIDs:(id)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)maximumCount;
-(id)initWithDestination:(unsigned)arg1 maximumCount:(int)arg2 enabledSectionIDs:(id)arg3 ;
-(NSSet *)enabledSectionIDs;
-(unsigned)publisherDestination;
@end

