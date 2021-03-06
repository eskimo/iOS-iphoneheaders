/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3PropertyPredicate.h>

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate {

	id _value;
	NSString* _transformFunction;
	int _comparison;
	BOOL _caseInsensitive;
	NSString* _treatNullAsString;

}

@property (nonatomic,retain) id value;                                //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) int comparison;                          //@synthesize comparison=_comparison - In the implementation block
@property (assign,nonatomic) BOOL caseInsensitive;                    //@synthesize caseInsensitive=_caseInsensitive - In the implementation block
@property (nonatomic,copy) NSString * treatNullAsString;              //@synthesize treatNullAsString=_treatNullAsString - In the implementation block
@property (nonatomic,copy) NSString * transformFunction;              //@synthesize transformFunction=_transformFunction - In the implementation block
@property (nonatomic,copy,readonly) NSString * operator; 
+(id)predicateWithProperty:(id)arg1 equalToInt64:(long long)arg2 ;
+(id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 equalToInteger:(long long)arg2 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 treatNullAsString:(id)arg5 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 transformFunction:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(int)comparison;
-(void)setComparison:(int)arg1 ;
-(void)setCaseInsensitive:(BOOL)arg1 ;
-(void)setTreatNullAsString:(NSString *)arg1 ;
-(void)setTransformFunction:(NSString *)arg1 ;
-(BOOL)caseInsensitive;
-(NSString *)treatNullAsString;
-(NSString *)transformFunction;
-(NSString *)operator;
-(id)valueToBindForOperation:(long long)arg1 ;
-(id)initWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 transformFunction:(id)arg5 treatNullAsString:(id)arg6 ;
@end

