/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDTimeNode.h>

@class PDAnimationTarget, NSString;

@interface PDSequentialTimeNode : PDTimeNode

@property (nonatomic,retain) PDAnimationTarget * target; 
@property (assign,nonatomic) int presetClass; 
@property (assign,nonatomic) int presetId; 
@property (assign,nonatomic) int triggerType; 
@property (assign,nonatomic) int iterateType; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double direction; 
@property (nonatomic,retain) NSString * groupId; 
+(unsigned long long)buildPartsFromTarget:(id)arg1 ;
+(id)timeNodeUnion:(id)arg1 initWithClass:(Class)arg2 ;
+(id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1 target:(id)arg2 ;
+(id)newSequentialTimeNodeGroupForAnimationInfo;
+(id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setTarget:(PDAnimationTarget *)arg1 ;
-(double)delay;
-(PDAnimationTarget *)target;
-(void)setDirection:(double)arg1 ;
-(double)direction;
-(void)setPresetId:(int)arg1 ;
-(id)level1ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1 ;
-(id)level2ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1 level1NodeIndex:(unsigned long long)arg2 ;
-(id)level3BehaviorAtNodeIndex:(unsigned long long)arg1 level2NodeIndex:(unsigned long long)arg2 level1NodeIndex:(unsigned long long)arg3 ;
-(void)setLevel2ParallelAttribute:(/*^block*/id)arg1 ;
-(void)setTriggerType:(int)arg1 ;
-(int)triggerType;
-(int)presetClass;
-(int)presetId;
-(int)iterateType;
-(void)setPresetClass:(int)arg1 ;
-(void)setIterateType:(int)arg1 ;
-(NSString *)groupId;
-(void)setGroupId:(NSString *)arg1 ;
@end

