/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/healthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface _HDSourceManagerCacheItem : NSObject {

	char _userOrdered;
	NSArray* _sources;
	NSArray* _sourceIDs;

}

@property (nonatomic,retain) NSArray * sources;                //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSArray * sourceIDs;              //@synthesize sourceIDs=_sourceIDs - In the implementation block
@property (assign,nonatomic) char userOrdered;                 //@synthesize userOrdered=_userOrdered - In the implementation block
-(id)initWithSources:(id)arg1 IDs:(id)arg2 userOrdered:(char)arg3 ;
-(NSArray *)sourceIDs;
-(char)userOrdered;
-(void)setSourceIDs:(NSArray *)arg1 ;
-(void)setUserOrdered:(char)arg1 ;
-(id)description;
-(void)setSources:(NSArray *)arg1 ;
-(NSArray *)sources;
@end

