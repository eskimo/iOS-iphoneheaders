/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BBBulletin;

@interface BBBulletinUpdate : NSObject {

	char _shouldSync;
	BBBulletin* _bulletin;
	int _type;
	unsigned _feeds;

}

@property (nonatomic,retain,readonly) BBBulletin * bulletin;              //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,readonly) int type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char shouldSync;                           //@synthesize shouldSync=_shouldSync - In the implementation block
@property (nonatomic,readonly) unsigned feeds;                            //@synthesize feeds=_feeds - In the implementation block
+(id)modifyForBulletin:(id)arg1 feeds:(unsigned)arg2 ;
+(id)removeForBulletin:(id)arg1 feeds:(unsigned)arg2 shouldSync:(char)arg3 ;
-(void)dealloc;
-(int)type;
-(unsigned)feeds;
-(char)shouldSync;
-(id)initWithBulletin:(id)arg1 feeds:(unsigned)arg2 type:(int)arg3 shouldSync:(char)arg4 ;
-(BBBulletin *)bulletin;
-(id)typeDescription;
@end

