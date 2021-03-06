/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/NSCopying.h>

@class NSString, NSArray;

@interface HNDCustomGesture : NSObject <NSCopying> {

	BOOL _isDoubleTap;
	BOOL _shouldPerformAtOriginalLocation;
	BOOL _hasLocalizableName;
	NSString* _name;
	NSArray* _points;
	NSArray* _times;

}

@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * points;                                  //@synthesize points=_points - In the implementation block
@property (nonatomic,retain) NSArray * times;                                   //@synthesize times=_times - In the implementation block
@property (assign,nonatomic) BOOL isDoubleTap;                                  //@synthesize isDoubleTap=_isDoubleTap - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformAtOriginalLocation;              //@synthesize shouldPerformAtOriginalLocation=_shouldPerformAtOriginalLocation - In the implementation block
@property (assign,nonatomic) BOOL hasLocalizableName;                           //@synthesize hasLocalizableName=_hasLocalizableName - In the implementation block
+(id)gestureWithDictionary:(id)arg1 ;
-(void)perform;
-(void)setIsDoubleTap:(BOOL)arg1 ;
-(void)setShouldPerformAtOriginalLocation:(BOOL)arg1 ;
-(void)setHasLocalizableName:(BOOL)arg1 ;
-(BOOL)isDoubleTap;
-(BOOL)shouldPerformAtOriginalLocation;
-(BOOL)hasLocalizableName;
-(NSArray *)times;
-(void)setTimes:(NSArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)dictionaryRepresentation;
-(id)_initWithDictionary:(id)arg1 ;
-(void)setPoints:(NSArray *)arg1 ;
-(NSArray *)points;
@end

