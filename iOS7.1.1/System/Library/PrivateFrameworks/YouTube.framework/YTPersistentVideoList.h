/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface YTPersistentVideoList : NSObject {

	NSString* _categoryName;
	NSMutableArray* _videos;

}
+(id)persistPathWithCategoryName:(id)arg1 ;
-(void)dealloc;
-(void)removeFromDisk;
-(void)persist;
-(id)videos;
-(void)addVideo:(id)arg1 ;
-(id)initWithCategoryName:(id)arg1 ;
@end

