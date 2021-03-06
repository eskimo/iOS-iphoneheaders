/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/MCAction.h>

@class NSString, MCAction;

@interface MCConditionalAction : MCAction {

	NSString* _predicate;
	MCAction* _actionIfTrue;
	MCAction* _actionIfFalse;

}

@property (copy) NSString * predicate;                    //@synthesize predicate=_predicate - In the implementation block
@property (retain) MCAction * actionIfTrue;               //@synthesize actionIfTrue=_actionIfTrue - In the implementation block
@property (retain) MCAction * actionIfFalse;              //@synthesize actionIfFalse=_actionIfFalse - In the implementation block
+(id)conditionalActionWithPredicate:(id)arg1 ;
+(id)conditionalActionWithPredicate:(id)arg1 actionIfTrue:(id)arg2 actionIfFalse:(id)arg3 ;
-(id)description;
-(void)setPredicate:(NSString *)arg1 ;
-(NSString *)predicate;
-(id)imprint;
-(MCAction *)actionIfTrue;
-(MCAction *)actionIfFalse;
-(void)setActionIfTrue:(MCAction *)arg1 ;
-(void)setActionIfFalse:(MCAction *)arg1 ;
-(void)demolish;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(id)setTransitionForTargetPlugObjectID:(id)arg1 withTransitionID:(id)arg2 forCondition:(char)arg3 ;
-(id)setAnimationTriggerForTargetPlugObjectID:(id)arg1 withAnimationKey:(id)arg2 forCondition:(char)arg3 ;
-(id)setGenericActionForTargetPlugObjectID:(id)arg1 withAttributes:(id)arg2 forCondition:(char)arg3 ;
-(id)setActionGroupForCondition:(char)arg1 ;
-(id)setConditionalActionWithPredicate:(id)arg1 forCondition:(char)arg2 ;
@end

